#pragma once

#ifdef _WIN32
#  ifdef MyLib_EXPORTS
#    define MyLib_EXPORT __declspec( dllexport )
#  else
#    define MyLib_EXPORT __declspec( dllimport )
#  endif
#else
#define MyLib_EXPORT
#endif
