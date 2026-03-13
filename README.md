# suckless-config

My personal build of the suckless software suite. This includes dwm, dmenu, st and slstatus, all patched and configured to my liking.

The configuration is intentionally minimal. No unnecessary bloat, no complex scripting. Everything is done directly in C header files as suckless intends.

---

## What is included

- **dwm** - Dynamic window manager. The core of the setup.
- **dmenu** - Keyboard-driven application launcher.
- **st** - Simple terminal emulator.
- **slstatus** - Lightweight status bar that feeds into the dwm bar.

---

## How to use this config

Clone the repository and build each program individually.

```bash
git clone https://github.com/t9tuco/suckless-config.git
cd suckless-config
```

Before building, open each `config.h` and adjust paths or settings to match your system. Most importantly, in `dwm/config.h` update the theme include path:

```c
#include "/your/path/to/suckless-config/dwm/Themes/wine.h"
```

Then build and install each component:

```bash
cd dwm && sudo make clean install && cd ..
cd dmenu && sudo make clean install && cd ..
cd st && sudo make clean install && cd ..
cd slstatus && sudo make clean install && cd ..
```

---

## Dependencies

Install these before building:

```bash
sudo apt install build-essential libx11-dev libxft-dev libxinerama-dev libxrandr-dev
```

For the font used in this config (JetBrainsMono Nerd Font):

```bash
sudo apt install fonts-jetbrains-mono
```

Or grab the Nerd Font variant from https://www.nerdfonts.com

---

## Starting dwm

Add the following to your `~/.xinitrc`:

```bash
slstatus &
exec dwm
```

Then start your session with `startx`.

---

## Themes

Color themes for dwm are stored in `dwm/Themes/`. To switch themes, change the include at the top of `dwm/config.h` and rebuild dwm.

Available themes:

- `wine.h` - Weinrot and dark, currently active
- `gray.h` - Minimal dark gray
- `navy.h` - Dark navy blue
- `nord.h` - Nord-inspired palette
- `purple.h` - Deep purple tones
- `red.h` - Bright red accents
- `turquoise.h` - Teal and dark
- `white.h` - Light theme

To switch, for example to navy:

```c
// in dwm/config.h
#include "Themes/navy.h"
```

Then rebuild:

```bash
cd dwm && sudo make clean install
```

---

## dwm keybindings

The default modifier key is `Alt` (Mod1).

| Keybind | Action |
|---|---|
| Alt + p | Open dmenu |
| Alt + Shift + Return | Open terminal (st) |
| Alt + j / k | Focus next/previous window |
| Alt + h / l | Resize master area |
| Alt + Return | Promote window to master |
| Alt + t | Tile layout |
| Alt + f | Floating layout |
| Alt + m | Monocle layout |
| Alt + Shift + c | Close window |
| Alt + Shift + q | Quit dwm |
| Alt + Shift + R | Screenshot (flameshot) |
| Alt + - / = | Decrease/increase gaps |
| Alt + 1-8 | Switch to tag |

---

## slstatus

The status bar shows:

- CPU usage
- RAM usage
- Disk usage (used/total)
- Date
- Time

Configured in `slstatus/config.h`. Rebuild and restart slstatus after changes.

---

## Notifications

Notifications are handled by dunst. The config is at `~/.config/dunst/dunstrc` and is styled to match the wine theme.

Restart dunst after changes:

```bash
pkill dunst && dunst &
```

---

## Notes

- All config files in this repo are `config.h`, not `config.def.h`. The `config.def.h` files are the upstream defaults and are left for reference.
- Patches applied to dwm are stored in `dwm/Patches/`.
- This setup is built and tested on Arch/Debian-based Linux.
