Author : Florian RACINE

#This directory store my config files and my scripts

##Installation :

##Dependencies
```bash
sudo apt install xclip fzf vim
sudo pacman -S xclip fzf vim
```

##Set directory for note taking
```bash
mkdir $HOME/notes
```

##Copy all config files in your home
```bash
cp $HOME/code/dotfiles/.vimrc $HOME/.vimrc
cp $HOME/code/dotfiles/.bashrc $HOME/.bashrc
cp $HOME/code/dotfiles/.zshrc $HOME/.zshrc
[...]
```

##Script installation :
```bash
sudo apt install xclip
sudo pacman -S xclip
mkdir $HOME/Documents/notes
echo "alias npcpp='bash $HOME/Documents/code/scripts/np.sh'" >> $HOME/.zshrc
echo "alias noteTaker='bash $HOME/Documents/code/scripts/noteTaker.sh'" >> $HOME/.zshrc
```
