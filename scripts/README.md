Author: Florian RACINE

<h1>This directory stores my scripts</h1>

<h2>Scripts</h2>

<h3>npcpp</h3>

This script is used to start a C++ project quicker.

* Makes a directory
* Makes a cpp file with a template
* The clipboard is stored in an "inp" file.

```bash
npcpp "nameOfTheProject.dir"
```

<h3>NoteTaker</h3>

This script opens a buffer in vim to take notes.

<h2>Installation</h2>

<h3>Dependencies</h3>

```bash
sudo apt install xclip
sudo pacman -S xclip
```

<h3>Directory to store notes</h3>

```bash
mkdir $HOME/Documents/notes
```

<h3>Aliases</h3>

```bash
echo "alias npcpp='bash $HOME/Documents/code/scripts/np.sh'" >> $HOME/.zshrc
echo "alias noteTaker='bash $HOME/Documents/code/scripts/noteTaker.sh'" >> $HOME/.zshrc
```
