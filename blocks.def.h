//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/* Icon   Command                              Update Interval   Update Signal */
	{ " 󰻀 ",  "uname -r",                          0,                8              },
	{ "󰇮 ",   "cat ${XDG_DATA_HOME}/unread",       0,                7              },
	{ "󰬦 ",   "dwmupdates",                        0,                6              },
	{ "󰤨 ",   "dwmwifi",                           15,               5              },
	{ "",     "dwmvolume",                         0,                4              },
	{ "󱎖 ",   "dwmbrightness",                     0,                3              },
	{ "",     "dwmbattery",                        10,               2              },
	{ "󱑂 ",   "date \"+%a, %b %d (%Y) %H:%M \"",   60,               1              },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
