# Use powerline
USE_POWERLINE="true"

alias npcpp='bash $HOME/Documents/code/settingsLinux/np.sh'
alias "c=xclip -selection clipboard"
# alias "v=xclip -o"
setxkbmap -option caps:escape
neofetch

export FZF_DEFAULT_OPTS='
--color fg:242,bg:236,hl:65,fg+:15,bg+:239,hl+:108
--color info:108,prompt:109,spinner:108,pointer:168,marker:168
'

# Source manjaro-zsh-configuration
if [[ -e /usr/share/zsh/manjaro-zsh-config ]]; then
  source /usr/share/zsh/manjaro-zsh-config
fi

# Use manjaro zsh prompt
if [[ -e /usr/share/zsh/manjaro-zsh-prompt ]]; then
  source /usr/share/zsh/manjaro-zsh-prompt
fi
