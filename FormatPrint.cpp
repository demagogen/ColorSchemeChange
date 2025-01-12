#include <stdarg.h>
#include <stdio.h>
#include <assert.h>

#include "FormatPrint.h"

void ChangeColorAndStyle (COLOR color, STYLE style)
{
    printf ("\033[%d;", style);

    switch(style)
    {
        case DEFAULT_STYLE:
        case BOLD:
        case UNDERLINE:
        case INVERSE:
        case BOLD_OFF:
        case UNDERLINE_OFF:
        case INVERSE_OFF:
            break;

        default:
            assert (0 && "Invalid style");
            break;
    }

    printf("%dm", color);

    switch(color)
    {
        case DEFAULT_COLOR:
        case BLACK:
        case RED:
        case GREEN:
        case YELLOW:
        case BLUE:
        case MAGENTA:
        case CYAN:
        case WHITE:
            break;

        default:
            assert (0 && "Invalid color change_color");
            break;
    }
}

void FormatPrintf (COLOR color, STYLE style, const char *string, ...)
{
    assert (string);

    va_list argument_pointer;

    va_start            (argument_pointer, string);
    ChangeColorAndStyle (color, style);
    vprintf             (string, argument_pointer);
    printf              ("\033[0m");
    va_end              (argument_pointer);
}

void FormatFprintf (FILE* file, COLOR color, STYLE style, const char* string, ...)
{
    assert (file);
    assert (string);

    va_list argument_pointer;

    va_start            (argument_pointer, string);
    ChangeColorAndStyle (color, style);
    vfprintf            (file, string, argument_pointer);
    fprintf             (file, "\033[0m");
    va_end              (argument_pointer);
}
