/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "Overpass:style=Regular:size=14:antialias=true:autohint=true",
                               "font-awesome:pixelsize=10:antialias=true:autohint=true",
                               "NotoColorEmoji:pixelsize=17" };

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#000000" },
//	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeSel] = { "#FFFFFF", "#414350" },
	[SchemeOut] = { "#bbbbbb", "#000000" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;
static unsigned int lineheight = 34;         /* -h option; minimum height of a menu line     */
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */

static const char worddelimiters[] = " ";
