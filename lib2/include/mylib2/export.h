#pragma once

#ifdef _WIN32
#  ifdef MyLib2_EXPORTS
#    define MyLib2_EXPORT __declspec( dllexport )
#  else
#    define MyLib2_EXPORT __declspec( dllimport )
#  endif
#else
#define MyLib2_EXPORT
#endif
