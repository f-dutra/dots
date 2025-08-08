static const unsigned int borderpx    = 2;        /* border pixel of windows */
static const unsigned int barborderpx = 4;        /* border pixel of windows */
static const int topbar               = 0;        /* 0 means bottom bar */


static const char normbgcolor[]       = "#222222";
static const char normbordercolor[]   = "#444444";
static const char normfgcolor[]       = "#bbbbbb";
static const char selfgcolor[]        = "#eeeeee";
static const char selbgcolor[]        = "#005577";
static const char selbordercolor[]    = "#ff0000";
static const char barbordercolor[]    = "#222222";
static const unsigned int baralpha    = OPAQUE;
static const unsigned int borderalpha = OPAQUE;
static const unsigned int barborderalpha = OPAQUE;
static const char *colors[][3]        = {
	/*               fg         bg         border   */
	[SchemeNorm] = { normfgcolor, normbgcolor, normbordercolor },
	[SchemeSel]  = { selfgcolor, selbgcolor,  selbordercolor  },
};

static const unsigned int alphas[][3]      = {
     /*               fg      bg        border*/
     [SchemeNorm] = { OPAQUE, baralpha, borderalpha },
     [SchemeSel]  = { OPAQUE, baralpha, borderalpha },
};

