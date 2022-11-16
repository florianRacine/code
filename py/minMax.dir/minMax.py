MIN = -100000000

class minMaxPlayer(Player):
    
    def __init__(self):

    def maxValue(self, state, game):
        if (game.successors(state) == []):
            return (game.utility(), None)
        else:
            actionEtat = (MIN, None)
            for a, s in game.successors(state):
                m = self.minValue(s, game)
                if (actionEtat[0] < m[0]):
                    actionEtat = m
            return actionEtat

    def minValue(self, state, game):
        if (game.successors(state) == []):
            return (game.utility(), None)

    def bestMove(self, state, game):
        v, a = self.maxValue(state, game)
        return a

class game():

    def __init__(self):

    def successor(self, state, game):

    def utility(self, state, game):

