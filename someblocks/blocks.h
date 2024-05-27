//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/  /*Command*/           /*Update Interval*/   /*Update Signal*/
	// { "", "curl -s -m 20 'wttr.in/?format=1'",                   120, 0  },
	{ " 󰎆  ", "playerctl metadata -f '{{artist}} 「{{title}}」'", 10,    0  },
	{ "   ", "free -h | awk '/^Mem/ { print $3\"/\"$2 } '",      30,    0  },
  { "   ", "cut -d' ' -f1 /proc/loadavg",                      30,    0  },
  { "   ", "sensors | awk '/^Core 0/ {print $3 }' | cut -c2-", 30,    0  },
  { "   ", "pamixer --get-volume-human",                       0,     1  },
  { "   ", "pamixer --default-source --get-volume-human",      0,     2  },
	{ "   ", "iwgetid -r",                                       120,   0  },
  { " ",    "battery_status",                                   300,   0  },
	{ "   ", "date '+%H:%M '",                                   60,    0  },
	
	/* Updates whenever "pkill -SIGRTMIN+10 someblocks" is ran */
	/* {"", "date '+%b %d (%a) %I:%M%p'", 0, 10}, */
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
// static char delim[] = "  ";
static char delim[] = " |";
static unsigned int delimLen = 6;
