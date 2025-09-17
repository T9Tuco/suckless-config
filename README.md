# dw - Suckless Window Manager Configuration

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)
[![GitHub release](https://img.shields.io/github/v/release/T9Tuco/suckless-config)](https://github.com/T9Tuco/suckless-config/releases)
[![Last commit](https://img.shields.io/github/last-commit/T9Tuco/suckless-config)](https://github.com/T9Tuco/suckless-config/commits/main)
[![Open issues](https://img.shields.io/github/issues/T9Tuco/suckless-config)](https://github.com/T9Tuco/suckless-config/issues)

A fully customized **suckless** environment including `dwm`, `st`, `slstatus`, and `dwmenu`, optimized for minimalism, performance, and developer workflow on **Arch Linux**.

---

## Features

* **dwm** – Dynamic Window Manager with custom patches and layouts.
* **st** – Simple terminal with optimized colors and fonts.
* **slstatus** – Lightweight status monitor.
* **dwmenu** – Minimal and fast application launcher.
* Custom keybindings and workflow optimizations.

## Installation

Install required dependencies on Arch Linux:

```bash
sudo pacman -S base-devel xorg-server xorg-xinit libx11 libxft libxinerama fontconfig dmenu
```

Clone the repository and build:

```bash
git clone https://github.com/T9Tuco/suckless-config.git
cd suckless-config
make clean install
```

Refer to each component's documentation for advanced configuration options.

## Configuration

* **Keybindings** – `config.h` for `dwm` and `dwmenu`
* **Colors and fonts** – `config.h` for `st`
* **Status bar content** – `slstatus.c`

Example terminal colors (`st`):

```c
static const char *colorname[] = {
    "#1d1f21", // black
    "#cc6666", // red
    "#b5bd68", // green
    "#f0c674", // yellow
    "#81a2be", // blue
    "#b294bb", // magenta
    "#8abeb7", // cyan
    "#c5c8c6", // white
};
```

## Dependencies

* X11 libraries (libx11, libxft, libxinerama)
* Fontconfig & Xft
* Make & GCC
* Optional: `dmenu`

## Credits

Based on work by [m0skwa](https://m0skwa.tech)
GitHub: [https://github.com/m0skwa](https://github.com/m0skwa)

## License

MIT License – see LICENSE file.
