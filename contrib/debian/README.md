
Debian
====================
This directory contains files used to package delectrumd/delectrum-qt
for Debian-based Linux systems. If you compile delectrumd/delectrum-qt yourself, there are some useful files here.

## delectrum: URI support ##


delectrum-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install delectrum-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your delectrumqt binary to `/usr/bin`
and the `../../share/pixmaps/delectrum128.png` to `/usr/share/pixmaps`

delectrum-qt.protocol (KDE)

