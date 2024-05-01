//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{ "^fg(d3869b)   ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }  '", 30, 0 },
  { "^fg(83a598)   ", "cut -d' ' -f1 /proc/loadavg", 30, 0 },
  { "^fg(8ec07c)   ", "sensors | awk '/^Core 0/ {print $3 }' | cut -c2-", 30, 0 },
  { "^fg(b8bb26) 󰕾  ", "pamixer --get-volume", 5, 0 },
  { "^fg(fabd2f) 󰁹  ", "battery_status", 60, 0 },
	{ "^fg(d65d0e)   ", "iwgetid -r", 120, 0 },
	{ "^fg(fb4934)   ", "date '+%H:%M'", 60, 0 },
	
	/* Updates whenever "pkill -SIGRTMIN+10 someblocks" is ran */
	/* {"", "date '+%b %d (%a) %I:%M%p'",					0,		10}, */
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
