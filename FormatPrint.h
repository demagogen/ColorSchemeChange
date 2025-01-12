#ifndef COLOR_SCHEME_CHANGER_H_
#define COLOR_SCHEME_CHANGER_H_
//
#include <stdio.h>

/// @brief
/// @details color type

enum COLOR
{
    DEFAULT_COLOR =  0, ///<default
    BLACK         = 30, ///<black
    RED           = 31, ///<red
    GREEN         = 32, ///<green
    YELLOW        = 33, ///<yellow
    BLUE          = 34, ///<blue
    MAGENTA       = 35, ///<magenta
    CYAN          = 36, ///<cyan
    WHITE         = 37, ///<white
};

/// @brief
/// @details style type

enum STYLE
{
    DEFAULT_STYLE =  0, ///<default
    BOLD          =  1, ///<bold
    UNDERLINE     =  4, ///<underline
    INVERSE       =  7, ///<inverse
    BOLD_OFF      = 21, ///<turn off bold style
    UNDERLINE_OFF = 24, ///<turn off undeline style
    INVERSE_OFF   = 27, ///<turn off inverse style
};

/// @brief
/// @details Change color and style of string
///          FormatPrintf().
/// @param color
/// @param style

void ChangeColorAndStyle (COLOR color, STYLE style);

/// @brief
/// @details Print changed string in stdout
/// @param string
/// @param color
/// @param style

void FormatPrintf (COLOR color, STYLE style, const char* string, ...);

/// @brief
/// @details Print changed string in file
/// @param file
/// @param color
/// @param style
/// @param string

void FormatFprintf (FILE* file, COLOR color, STYLE style, const char* string, ...);

#endif
