/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "Product Sans:size=10.5",
                               "font-awesome:pixelsize=10:antialias=true:autohint=true",
                               "NotoColorEmoji:pixelsize=17" };

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#000000" },
//	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeSel] = { "#FFFFFF", "#575b7f" },
	[SchemeOut] = { "#bbbbbb", "#000000" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
