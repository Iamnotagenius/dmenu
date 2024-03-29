/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0xD0;
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static const unsigned int border_width = 0;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Iosevka:size=14:antialias=true",
    "Noto Color Emoji:antialias=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char password_char = '!'; /* -P option; character to print */
static const char *colors[SchemeLast][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { "#d3d0c8", "#2d2d2d" },
	[SchemeSel] = {  "#2d2d2d", "#cc99cc" },
	[SchemeNormHighlight] = { "#cc99cc", "#2d2d2d" },
	[SchemeSelHighlight] = { "#d3d0c8", "#cc99cc" },
	[SchemePrompt] = { "#cc99cc", "#2d2d2d" },
	[SchemeOut] = {  "#000000", "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
