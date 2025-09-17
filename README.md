# dw - Suckless Window Manager Configuration

[License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)
[GitHub Release](https://img.shields.io/github/v/release/YourUsername/dw)
[Last Commit](https://img.shields.io/github/last-commit/YourUsername/dw)
[Open Issues](https://img.shields.io/github/issues/YourUsername/dw)

This repository provides a fully customized **suckless** environment, including `dwm`, `st`, `slstatus`, and `dwmenu`. It is optimized for minimalism, speed, and developer productivity.

## Table of Contents

* [Features](#features)
* [Installation](#installation)
* [Configuration](#configuration)
* [Dependencies](#dependencies)
* [Credits](#credits)
* [License](#license)

## Features

* **dwm** – Dynamic Window Manager with custom patches and layouts.
* **st** – Simple terminal with optimized colors and fonts.
* **slstatus** – Lightweight status monitor for dwm.
* **dwmenu** – Minimal and fast application launcher.
* Custom keybindings and workflow optimizations.

## Installation

Ensure the required development libraries are installed:

```bash
sudo apt install build-essential libx11-dev libxft-dev libxinerama-dev
```

Clone the repository and build the components:

```bash
git clone https://github.com/YourUsername/dw.git
cd dw
make clean install
```

Refer to each component's documentation for advanced configuration options.

## Configuration

All configuration files are included. You can customize:

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

* X11 libraries
* Fontconfig and Xft
* Make and GCC
* Optional: `dmenu` for additional launcher functionality

## Credits

This configuration is based on the work of m0skwa.
Website: [https://m0skwa.tech](https://m0skwa.tech)
GitHub: [https://github.com/m0skwa](https://github.com/m0skwa)

## License

This project is licensed under the MIT License. See the LICENSE file for details.
