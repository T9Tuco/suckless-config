/* Void — Schwarz mit weißen Akzenten */

static const char *colorname[] = {

  [0]  = "#080808",  /* schwarz                               */
  [1]  = "#cc4444",  /* rot     — fehler, broken links        */
  [2]  = "#6aaa6a",  /* grün    — executables                 */
  [3]  = "#888888",  /* gelb    — device files                */
  [4]  = "#e2e2e2",  /* blau    — VERZEICHNISSE (fast weiß)   */
  [5]  = "#777777",  /* magenta — sockets                     */
  [6]  = "#aaaaaa",  /* cyan    — symlinks (mittelgrau)       */
  [7]  = "#cccccc",  /* weiß                                  */

  [8]  = "#2a2a2a",  /* hellschwarz                           */
  [9]  = "#ee6666",  /* hellrot                               */
  [10] = "#88cc88",  /* hellgrün                              */
  [11] = "#bbbbbb",  /* hellgelb                              */
  [12] = "#ffffff",  /* hellblau  — bold verzeichnisse        */
  [13] = "#999999",  /* hellmagenta                           */
  [14] = "#cccccc",  /* hellcyan  — bold symlinks             */
  [15] = "#ffffff",  /* hellweiß                              */

  [256] = "#080808",  /* Hintergrund    */
  [257] = "#e8e8e8",  /* Vordergrund    */
  [258] = "#ffffff",  /* Cursor — Weiß  */
};

unsigned int defaultfg  = 257;
unsigned int defaultbg  = 256;
unsigned int defaultcs  = 258;
static unsigned int defaultrcs = 257;

static unsigned int defaultitalic    = 7;
static unsigned int defaultunderline = 7;
