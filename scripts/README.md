Author : Florian RACINE

<h1> This directory store my scripts </h1> 

<h2> Script </h2>

<h3> Npcpp </h3>

This script is use to start a project of cpp quicker.
* Make a directory
* Make a cpp file with a template
* Clipboard is stored in "inp" file.

```bash
npcpp "nameOfTheProject.dir"
```

<h3> NoteTaker </h3>

This script open a buffer to take note in vim.

<h2> Installation </h2>

<h3> Dependencies </h3>

```bash
sudo apt install xclip
sudo pacman -S xclip
```

<h3> Directory to store notes </h3>

```bash
mkdir $HOME/Documents/notes
```

<h3> Alias </h3>

```bash
echo "alias npcpp='bash $HOME/Documents/code/scripts/np.sh'" >> $HOME/.zshrc
echo "alias noteTaker='bash $HOME/Documents/code/scripts/noteTaker.sh'" >> $HOME/.zshrc
```
