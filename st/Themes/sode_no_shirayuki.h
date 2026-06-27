/* Sode no Shirayuki — Rukia Kuchikis Bankai
 *
 * Terminal-Farbpalette: Mitternachtsblau + Eisweiß + kühle Akzente
 * Inspiriert von der eisigen Ästhetik des Wallpapers
 */

static const char *colorname[] = {

  /* 8 Normale Farben */
  [0]  = "#070c18",  /* schwarz   — Mitternacht            */
  [1]  = "#b84a6a",  /* rot       — kühles Karmesin        */
  [2]  = "#4e9e8c",  /* grün      — Gletscher-Teal         */
  [3]  = "#8ab0c8",  /* gelb      — gedämpftes Eisblau     */
  [4]  = "#3a7fa8",  /* blau      — Shirayuki-Blau          */
  [5]  = "#7868b0",  /* magenta   — kaltes Violett          */
  [6]  = "#50b8d0",  /* cyan      — Eis-Cyan                */
  [7]  = "#b0c8d8",  /* weiß      — kühles Hellgrau         */

  /* 8 Helle Farben */
  [8]  = "#1e3450",  /* hellschwarz — dunkles Marineblau   */
  [9]  = "#d06880",  /* hellrot     — helles Karmesin      */
  [10] = "#6ab8a8",  /* hellgrün    — helleres Teal        */
  [11] = "#c0dff0",  /* hellgelb    — Eis-Hellblau         */
  [12] = "#5aa0c8",  /* hellblau    — helles Shirayuki     */
  [13] = "#9888d0",  /* hellmagenta — helles Violett       */
  [14] = "#80d8f0",  /* hellcyan    — strahlender Eis-Cyan */
  [15] = "#edf5ff",  /* hellweiß    — Eisweiß              */

  /* Sonderfarben */
  [256] = "#070c18",  /* Hintergrund                        */
  [257] = "#b0c8d8",  /* Vordergrund                        */
  [258] = "#7ec8e3",  /* Cursor — Eis-Glühen                */
};

/*
 * Standardfarben (colorname Index)
 * Vordergrund, Hintergrund, Cursor, inverser Cursor
 */
unsigned int defaultfg  = 257;
unsigned int defaultbg  = 256;
unsigned int defaultcs  = 258;
static unsigned int defaultrcs = 257;

static unsigned int defaultitalic    = 7;
static unsigned int defaultunderline = 7;
