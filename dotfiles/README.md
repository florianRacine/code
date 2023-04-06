Author : Florian RACINE

<h1> This directory store my config files </h1> 

<h2> Installation : </h2>

<h3> Dependencies </h3>

```bash
sudo apt install xclip fzf vim
sudo pacman -S xclip fzf vim
```

<h3> Set directory for note taking </h3>

```bash
mkdir $HOME/notes
```

<h3> Copy all config files in your home </h3>

```bash
cp $HOME/code/dotfiles/.vimrc $HOME/.vimrc
cp $HOME/code/dotfiles/.bashrc $HOME/.bashrc
cp $HOME/code/dotfiles/.zshrc $HOME/.zshrc
[...]
```
