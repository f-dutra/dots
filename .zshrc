# colors
autoload -U colors && colors
PS1="%B%{$fg[red]%}[%{$fg[yellow]%}%n%{$fg[green]%}@%{$fg[blue]%}%M %{$fg[magenta]%}%~%{$fg[red]%}]%{$reset_color%}$%b "
eval "$(dircolors -b ~/.config/dircolors)"

# The following lines were added by compinstall

zstyle ':completion:*' completer _expand _complete _ignored _correct _approximate
zstyle :compinstall filename '/home/void/.zshrc'

autoload -Uz compinit
compinit
# End of lines added by compinstall
# Lines configured by zsh-newuser-install
HISTFILE=~/.histfile
HISTSIZE=1000
SAVEHIST=1000
unsetopt beep
# End of lines configured by zsh-newuser-install

# sudo not required for some system commands
for command in mount umount sv pacman updatedb su shutdown poweroff loginctl reboot ; do
	alias $command="sudo $command"
done; unset command

se() {
	choice="$(find ~/.local/bin -mindepth 1 -printf '%P\n' | fzf)"
	[ -f "$HOME/.local/bin/$choice" ] && $EDITOR "$HOME/.local/bin/$choice"
	}
# These common commands are just too long! Abbreviate them.
alias \
	ka="killall" \
	g="git" \
	trem="transmission-remote" \
	YT="youtube-viewer" \
	sdn="shutdown -h now" \
	e='$EDITOR' \
	v='$EDITOR' \
	p="pacman" \
	xi="sudo xbps-install" \
	xr="sudo xbps-remove -R" \
	xq="xbps-query" \
	z="zathura"

alias \
	lf="lfub" \
	magit="nvim -c MagitOnly" \
	ref='shortcuts >/dev/null; source ${XDG_CONFIG_HOME:-$HOME/.config}/shell/shortcutrc ; source ${XDG_CONFIG_HOME:-$HOME/.config}/shell/shortcutenvrc ; source ${XDG_CONFIG_HOME:-$HOME/.config}/shell/zshnameddirrc'
