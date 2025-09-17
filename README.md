# dw - Suckless Window Manager Configuration

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)
[![GitHub release](https://img.shields.io/github/v/release/YourUsername/dw)](https://github.com/YourUsername/dw/releases)
[![Last commit](https://img.shields.io/github/last-commit/YourUsername/dw)](https://github.com/YourUsername/dw/commits/main)
[![Open issues](https://img.shields.io/github/issues/YourUsername/dw)](https://github.com/YourUsername/dw/issues)

A fully customized **suckless** environment with `dwm`, `st`, `slstatus`, and `dwmenu`, optimized for minimalism, speed, and developer productivity.

---

## Features

* **dwm** – Dynamic Window Manager with custom patches and layouts.
* **st** – Simple terminal with optimized colors and fonts.
* **slstatus** – Lightweight status monitor.
* **dwmenu** – Minimal and fast application launcher.
* Custom keybindings and workflow enhancements.

## Installation

Ensure dependencies are installed:

```bash
sudo apt install build-essential libx11-dev libxft-dev libxinerama-dev
```

Clone and build:

```bash
git clone https://github.com/YourUsername/dw.git
cd dw
make clean install
```

For advanced configuration, refer to each component's documentation.

## Configuration

* **Keybindings** – `config.h` for `dwm` and `dwmenu`
* **Colors and fonts** – `config.h` for `st`
* **Status bar** – `slstatus.c`

Example terminal colors:

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
* Fontconfig & Xft
* Make & GCC
* Optional: `dmenu`

## Credits

Based on work by [m0skwa](https://m0skwa.tech)
GitHub: [https://github.com/m0skwa](https://github.com/m0skwa)

## License

MIT License – see LICENSE file.
