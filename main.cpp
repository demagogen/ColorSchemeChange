#include "FormatPrint.h"

int main ()
{
    FormatPrintf  (DEFAULT_COLOR, DEFAULT_STYLE,
                   "Hello!\nThis is my format printf mini library.\n"
                   "I made it for Ded's MIPT course in first semester.\n"
                   "For usage look at README\n");
    FormatPrintf  (RED, BOLD, "Cool day, buddy. I fucked up with my IT course :-(\n");
    FormatFprintf (stdout, GREEN, BOLD, "But I will not stop >:-)\n");
    FormatPrintf  (WHITE, BOLD, "Renamed repo 04:05 p. m. 12.01.2025\n");

    return 0;
}
