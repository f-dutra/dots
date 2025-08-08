static const unsigned int borderpx    = 3;        /* border pixel of windows */
static const unsigned int barborderpx = 3;        /* border pixel of windows */
static const unsigned int ubh		   = 4;
static const int topbar               = 1;        /* 0 means bottom bar */

static const char normbgcolor[]       = "#101010";
static const char normbordercolor[]   = "#101010";
static const char normfgcolor[]       = "#f0f0f0";
static const char selfgcolor[]        = "#101010";
static const char selbgcolor[]        = "#f0f0f0";
static const char selbordercolor[]    = "#f0f0f0";
static const char barbordercolor[]    = "#101010";
static const unsigned int baralpha    = OPAQUE;
static const unsigned int borderalpha = OPAQUE;
static const unsigned int barborderalpha = baralpha;
static const char *colors[][3]        = {
	/*               fg         bg         border   */
	[SchemeNorm] = { normfgcolor, normbgcolor, normbordercolor },
	[SchemeSel]  = { selfgcolor, selbgcolor,  selbordercolor  },
};

static const unsigned int alphas[][3]      = {
     /*               fg      bg        border*/
     [SchemeNorm] = { OPAQUE, baralpha, OPAQUE },
     [SchemeSel]  = { OPAQUE, baralpha, borderalpha },
};

