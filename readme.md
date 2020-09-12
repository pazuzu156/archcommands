# Custom Commands (Arch)

This branch is used for building this repo and being able to install commands using pacman

## Install

Clone this repo on this branch and install.

```git clone --single-branch --branch arch https://github.com/pazuzu156/archcommands.git```

Next, just build+install `makepkg -is`

## Updating

Using this PKGBUILD, simply pull changes and run makepkg: `makepkg -isf`

## Removing

Remove using pacman: `sudo pacman -Rs archcommands`
