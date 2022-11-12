"==============================================================================
" Features 1

" Set 'nocompatible' to ward off unexpected things that your distro might
" have made, as well as sanely reset options when re-sourcing .vimrc
set nocompatible

" Attempt to determine the type of a file based on its name and possibly its
" contents. Use this to allow intelligent auto-indenting for each filetype,
" and for plugins that are filetype specific.
if has('filetype')
  filetype indent plugin on
endif

"==============================================================================
" Must have options 2

" The 'hidden' option, which allows you to re-use the same window and switch
" from an unsaved buffer without saving it first. Also allows you to keep an
" undo history for multiple files when re-using the same window in this way.
" Note that using persistent undo also lets you undo in multiple files even in
" the same window, but is less efficient and is actually designed for keeping
" undo history after closing Vim entirely. Vim will complain if you try to
" quit without saving, and swap files will keep you safe if your computer
" crashes.
set hidden

" Alternatives include using tabs or split windows instead of re-using the same
" window as mentioned above, and/or either of the following options:
" set confirm
" set autowriteall

" Better command-line completion
set wildmenu

" Show partial commands in the last line of the screen
set showcmd

set noswapfile
set nobackup

"==============================================================================
" Usability options 3

" Use case insensitive search, except when using capital letters
set ignorecase
set smartcase

" Highlight the search
set hlsearch

" The cursor don't have to go to the edge of the file to start scroll
"set scrolloff=8

" Allow backspacing over autoindent, line breaks and start of insert action
set backspace=indent,eol,start

" When opening a new line and no filetype-specific indenting is enabled, keep
" the same indent as the line you're currently on. Useful for READMEs, etc.
set autoindent

" Stop certain movements from always going to the first character of a line.
" While this behaviour deviates from that of Vi, it does what most users
" coming from other editors would expect.
set nostartofline

" Display the cursor position on the last line of the screen or in the status
" line of a window
set ruler

" Always display the status line, even if only one window is displayed
set laststatus=2

" Instead of failing a command because of unsaved changes, instead raise a
" dialogue asking if you wish to save changed files.
set confirm

" Use visual bell instead of beeping when doing something wrong
set visualbell

" And reset the terminal code for the visual bell. If visualbell is set, and
" this line is also included, vim will neither flash nor beep. If visualbell
" is unset, this does nothing.
set t_vb=

" Enable use of the mouse for all modes
if has('mouse')
  set mouse=a
endif

" Set the command window height to 2 lines, to avoid many cases of having to
" "press <Enter> to continue"
set cmdheight=2
set colorcolumn=85
set signcolumn=yes

" Display line numbers on the left
set number
set relativenumber

" Highlight the current line
set cursorline

" Quickly time out on keycodes, but never time out on mappings
set notimeout ttimeout ttimeoutlen=200

"==============================================================================
" Indentation options 4
"
" Indentation settings according to personal preference.

" Indentation settings for using 4 spaces instead of tabs.
" Do not change 'tabstop' from its default value of 8 with this setup.
set shiftwidth=4
set softtabstop=4
set expandtab

" Indentation settings for using hard tabs for indent. Display tabs as
" four characters wide.
"set shiftwidth=4
"set tabstop=4

set completeopt=menuone,noinsert,noselect

"==============================================================================
" Mappings 5
"
" Useful mappings

" Map Y to act like D and C, i.e. to yank until EOL, rather than act as yy,
" which is the default
map Y y$

map <space> <Leader>

map <leader>q :bp<bar>sp<bar>bn<bar>bd<CR>

" Map <C-L> (redraw screen) to also turn off search highlighting until the
" next search
nnoremap <C-L> :nohl<CR><C-L>

" Open new file
" With ex
"inoremap <c-b> <Esc>:Lex<cr>:vertical resize 40<cr>
"nnoremap <c-b> <Esc>:Lex<cr>:vertical resize 40<cr>

" With fzf
inoremap <Leader>b <Esc>:Buffers<cr>
nnoremap <Leader>b <Esc>:Buffers<cr>

inoremap <Leader>f <Esc>:Files<cr>
nnoremap <Leader>f <Esc>:Files<cr>

inoremap <Leader>m <Esc>:Marks<cr>
nnoremap <Leader>m <Esc>:Marks<cr>

" Add new line without leaving the Normal mode

" imap jk <Esc>

"==============================================================================
" Short cut 6

" Latex
noremap <F1> <ESC> :w <CR> :!clear <CR> :!pdflatex % <CR>
inoremap <F1> <ESC> :w <CR> :!clear <CR>:!pdflatex % <CR>

" Python
noremap <F2> <ESC> :w <CR> :!clear <CR> :!python3 % <CR>
inoremap <F2> <ESC> :w <CR> :!clear <CR>:!python3 % <CR>

" C++
noremap <F8> <ESC> :w <CR> :!clear <CR> :!g++ -fsanitize=address -std=c++17 -O2 -o %< % && ./%< < inp<CR>
inoremap <F8> <ESC> :w <CR> :!clear <CR> :!g++ -fsanitize=address -std=c++17 -O2 -o "%<" "%" && "./%<" < inp<CR>

noremap <F9> <ESC> :w <CR> :!clear <CR> :!g++ -fsanitize=address -std=c++17 -Wall -Wextra -Wshadow -DONPC -O2 -o %< % && ./%< <CR>
inoremap <F9> <ESC> :w <CR> :!clear <CR>:!g++ -fsanitize=address -std=c++17 -Wall -Wextra -Wshadow -DONPC -O2 -o %< % && ./%< <CR>
 
noremap <F10> <ESC> :w <CR> :!clear <CR> :!g++ -fsanitize=address -std=c++17 -Wall -Wextra -Wshadow -DONPC -O2 -o %< % && ./%< < inp<CR>
inoremap <F10> <ESC> :w <CR> :!clear <CR>:!g++ -fsanitize=address -std=c++17 -Wall -Wextra -Wshadow -DONPC -O2 -o "%<" "%" && "./%<" < inp<CR>

"==============================================================================
" Plugin 7

call plug#begin('~/.vim/plugged')

"Plugin for autocompletion
Plug 'sirver/ultisnips'
Plug 'honza/vim-snippets'

"Plugin for highlighted yank
Plug 'machakann/vim-highlightedyank'

"Plugin for latex
Plug 'lervag/vimtex'

"Plugin for style
Plug 'morhetz/gruvbox'
Plug 'crusoexia/vim-monokai'
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'

" Plugin displaying thin vertical lines at each indentation level for code
Plug 'Yggdroot/indentLine'

"Plugin for smooth scroll
Plug 'psliwka/vim-smoothie'

"Plugin for commenter
Plug 'preservim/nerdcommenter'

"Plugin for more actions
Plug 'tpope/vim-surround'
Plug 'tpope/vim-repeat'

"Plugin explorer
Plug 'junegunn/fzf.vim'

"==============================================================================
" Configuration plugin 8

set conceallevel=1
let g:highlightedyank_highlight_duration=80

let g:tex_conceal='abdmg' 
let g:tex_flavor='latex'

let g:vimtex_view_method='general'
let g:vimtex_quickfix_mode=0

let g:UltiSnipsExpandTrigger ='<tab>'
let g:UltiSnipsJumpForwardTrigger ='<tab>'
let g:UltiSnipsJumpBackwardTrigger ='<s-tab>'

let g:indentLine_fileType=[]
let g:indentLine_char='│'

call plug#end()
":PlugInstall

colorscheme monokai
