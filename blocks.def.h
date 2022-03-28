// Comment to get white plain unicode characters.
#define COLORED

// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/* Icon    Command                              Update Interval   Update Signal */
	{ "",    "dwmrecord",                                     0,                11             },
	{ "",    "dwmcpu",                                        30,               9              },
	{ "",    "dwmmem",                                        30,               8              },
	{ "",    "dwmmail",                                       0,                7              },
	{ "",    "dwmupdates",                                    0,                6              },
	{ "",    "dwmnet",                                        2,                10             },
	{ "",    "dwmwifi",                                       15,               5              },
	{ "",    "dwmvolume",                                     0,                4              },
	{ "",    "dwmbrightness",                                 0,                3              },
	{ "",    "dwmbattery",                                    10,               2              },
#ifndef COLORED
	{ " 󱑂 ", "date \"+%a, %b %d (%Y) %H:%M \"",               10,               1              },
#else
	{ "",    "date \"+ 📅 %a, %b %d (%Y) | 🕓 %H:%M \"",      10,               1              },
#endif
};

// Sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "\0";
static unsigned int delimLen = 0;
