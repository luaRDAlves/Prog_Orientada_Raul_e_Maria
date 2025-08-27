#!/bin/sh

code --install-extension cantonios.project-templates
code --install-extension ms-vscode.cmake-tools
code --install-extension ms-vscode.cpptools
code --install-extension ms-vscode.cpptools-extension-pack
code --install-extension amiralizadeh9480.cpp-helper
code --install-extension fleexo.cpp-class-creator
code --install-extension theumletteam.umlet
code --install-extension dnut.rewrap-revived
code --install-extension mhutchie.git-graph

tar -C /usr/share/code/data/user-data/User/ -zxvf /install/code-templates.tgz

