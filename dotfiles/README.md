Author : Florian RACINE

<h1> This directory store my config files </h1> 

<h2> My vimrc file </h2>

Over the last 3 years, I have used and tweaked Vim. This configuration is my current vimrc !

<h3> Screenshot </h3>

![screen to show  vimrc](https://user-images.githubusercontent.com/103432737/230635873-5b23a1cb-77ef-4e4d-8578-031609a08143.png)

<h3> Included Plugins </h3>

I recommend reading the docs of these plugins to understand them better. Each plugin provides a much better Vim experience!

<h4> Autocompletion </h4> 

* [ultisnips](https://github.com/SirVer/ultisnips): UltiSnips is the ultimate solution for snippets in Vim. It has many features, speed being one of them.
* [vim-snippets](https://github.com/honza/vim-snippets): Contains snippets files for various programming languages.

<h4> Style </h4> 

* [vim-airline](https://github.com/vim-airline/vim-airline): Lean & mean status/tabline for vim that's light as air.
* [vim-airline-themes](https://github.com/vim-airline/vim-airline-themes): This is the official theme repository for vim-airline.
* [vim-monokai](https://github.com/sickill/vim-monokai): Monokai color scheme for Vim converted with coloration from Textmate theme with the same name.
* [gruvbox](https://github.com/morhetz/gruvbox): The main focus when developing gruvbox is to keep colors easily distinguishable, contrast enough and still pleasant for the eyes.
* [vim-smoothie](https://github.com/psliwka/vim-smoothie): This (neo)vim plugin makes scrolling nice and smooth. Find yourself completely lost every time you press Ctrl-D or Ctrl-F?
* [vim-highlightedyank](https://github.com/machakann/vim-highlightedyank): Make the yanked region apparent!
* [vim-gitgutter](https://github.com/airblade/vim-gitgutter): A Vim plugin which shows a git diff in the sign column. It shows which lines have been added, modified, or removed.
* [vim-indent-guides](https://github.com/preservim/vim-indent-guides): Indent Guides is a plugin for visually displaying indent levels in Vim.

<h4> Commenter </h4>

* [nerdcommenter](https://github.com/preservim/nerdcommenter): Comment functions so powerful—no comment necessary.

<h4> For more actions </h4>

* [vim-surround](https://github.com/tpope/vim-surround): The plugin provides mappings to easily delete, change and add such surroundings in pairs.
* [vim-repeat](https://github.com/tpope/vim-repeat): Comment functions so powerful—no comment necessary.

<h4> Exploration </h4>

* [fzf.vim](https://github.com/junegunn/fzf.vim): fzf in vim.

<h3> Key Mappings </h3> 

The [leader](http://learnvimscriptthehardway.stevelosh.com/chapters/06.html#leader) is `space`, so whenever you see `<leader>` it means `space`.

Map Y to act like D and C, i.e. to yank until EOL, rather than act as yy, which is the default

```vimscript
map Y y$
```

Switch between buffer

```vimscript
map <leader><tab> <c-6>
```

Move between split with `ctrl` and `h`, `j`, `k`, `l`.

```vimscript
noremap <C-h> <C-w>h
noremap <C-j> <C-w>j
noremap <C-k> <C-w>k
noremap <C-l> <C-w>l
```

cd vim into the directory of the current buffer.

```vimscript
nnoremap <leader>cd :cd %:p:h<CR>
```

Fzf mapping to manage buffers, marks and search for files.

```vimscript
inoremap <Leader>b <Esc>:Buffers<cr>
nnoremap <Leader>b <Esc>:Buffers<cr>

inoremap <Leader>f <Esc>:Files<cr>
nnoremap <Leader>f <Esc>:Files<cr>

inoremap <Leader>m <Esc>:Marks<cr>
nnoremap <Leader>m <Esc>:Marks<cr>
```

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
