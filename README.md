Author: Florian RACINE

<h1>This repository is used to set up my programming environment.</h1>

<h2>What does this repository contain?</h2>

* 🤝 My personal dotfiles for Linux
* 🔭 Solutions to competitive programming problems
* 🌱 Books that I use for programming
* 👨‍ Linux scripts

<h2>Examples of vim configuration and a Linux script [np.sh]</h2>

![screen](https://user-images.githubusercontent.com/103432737/208796533-9dd1bc64-7b14-4e88-ab97-5739bfa412f9.png)

<h2>Installation</h2>
First, clone this repository

```bash
cd $HOME
git clone https://github.com/florianRacine/code.git
```

Copy dotfiles to your home directory

```bash
cp $HOME/code/dotfiles/.vimrc $HOME/.vimrc
cp $HOME/code/dotfiles/.bashrc $HOME/.bashrc
cp $HOME/code/dotfiles/.zshrc $HOME/.zshrc
[...]
```

If you don't want to overwrite your configuration files, you can define aliases for the scripts

```bash
echo "alias npcpp='bash $HOME/Documents/code/scripts/np.sh'" >> $HOME/.bashrc
```
Or for zsh :

```bash
echo "alias npcpp='bash $HOME/Documents/code/scripts/np.sh'" >> $HOME/.zshrc
```
