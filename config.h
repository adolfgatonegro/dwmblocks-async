#define CMDLENGTH 60
#define DELIMITER "  "
#define LEADING_DELIMITER
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("sb-mpris", 5, 13),
	BLOCK("cat /tmp/recordingicon 2>/dev/null", 0, 18),
	BLOCK("sb-torrent", 30, 17),
	BLOCK("sb-updates", 18000, 12),
	BLOCK("sb-traffic", 1, 14),
	BLOCK("sb-bluetooth", 5, 19),
	BLOCK("sb-internet", 5, 15),
	BLOCK("sb-battery", 5, 16),
	BLOCK("sb-volume", 0, 10),
	BLOCK("sb-clock", 30, 11),
};
