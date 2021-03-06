#!/usr/bin/env bash

if [ "$(basename "$SHELL")" = "zsh" ] ; then
    autoload -U +X compinit bashcompinit
    compinit -i && bashcompinit
fi

_doe_completion() {
    COMPREPLY=()
    case ${COMP_CWORD} in
    1) COMPREPLY=( $(compgen -W "$(doe list-modules)" -- "${COMP_WORDS[COMP_CWORD]}") ) ;;
    2) COMPREPLY=( $(compgen -W "$(doe "${COMP_WORDS[COMP_CWORD-1]}" list-functions)" -- "${COMP_WORDS[COMP_CWORD]}") ) ;;
    esac
}

complete -F _doe_completion doe
