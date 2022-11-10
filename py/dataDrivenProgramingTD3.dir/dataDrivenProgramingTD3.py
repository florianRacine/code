from pony import orm
import numpy as np
import pandas

db = orm.Database()

class Client(db.Entity):
    id_client = orm.PrimaryKey(str)
    telephone = orm.Required(str)
    ville = orm.Required(str)
    pays = orm.Required(str)
    achats = orm.Set('Commande')

class Produit(db.Entity):
    code_produit = orm.PrimaryKey(str)
    type_produit = orm.Required(str)
    prix_unitaire = orm.Required(float)
    ventes = orm.Set('Commande')

class Commande(db.Entity):
    num_commande = orm.Required(int)
    code_produit = orm.Required(str)
    orm.PrimaryKey(num_commande, code_produit)
    quantité = orm.Required(int)
    montant = orm.Required(float)
    mois = orm.Required(int)
    année = orm.Required(int)
    client = orm.Required(Client)
    produit = orm.Required(Produit)

with open('ventes_new.csv', encoding='utf-8') as f:
    data = pandas.read_csv(f)

clients = data[["CLIENT", "TELEPHONE", "VILLE", "PAYS"]].drop_duplicates()
with orm.db_session:
    for c in clients.values:
        try:
            Client(id_client = c[0], telephone = c[1], ville = c[2], pays = c[3])
            orm.commit()
        except Exception as e:
            print("*** ERREUR DE TRANSACTION :", e, '***')
