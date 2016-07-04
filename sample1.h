#ifndef sample1_header
#define sample1_header
#define __PROG_TYPES_COMPAT__

#include <avr/pgmspace.h>

#define sample1_size 1632
#define sample1_fs_micro 0.0240f

extern PROGMEM prog_uchar const sample1_data[sample1_size];

#endif
