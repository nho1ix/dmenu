/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "Overpass:style=Regular:size=13:antialias=true:autohint=true",
                               "font-awesome:pixelsize=10:antialias=true:autohint=true",
                               "NotoColorEmoji:pixelsize=44" };


static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#b55617";
// static char selbgcolor[]  = "#414350";
static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor },
//	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeSel] = { selfgcolor, selbgcolor },
	[SchemeOut] = { "#bbbbbb", "#000000" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;
static unsigned int lineheight = 44;         /* -h option; minimum height of a menu line     */
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */

static const char worddelimiters[] = " ";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	// { "font",        STRING, &font },
	{ "color17",		STRING,	&normbgcolor },
	{ "color18",		STRING,	&normfgcolor },
	{ "color18",		STRING,	&selfgcolor },
	{ "color20",		STRING,	&selbgcolor },
	{ "prompt",      STRING, &prompt },
};
