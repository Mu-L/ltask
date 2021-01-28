#ifndef ltask_systime_h
#define ltask_systime_h

#include <stdint.h>

// In centisecond: 1/100 second
uint64_t systime_wall();
uint64_t systime_mono();

#if defined(_WIN32)
void set_highest_timer_resolution();
#endif

#endif
