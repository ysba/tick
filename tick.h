#ifndef __TICK_HEADER__
#define __TICK_HEADER__

#include <stdint.h>
#include <stdbool.h>

typedef unsigned int tick_t;

extern tick_t tick_count;

bool tick_compare(tick_t val);
                
#define tick_set(val) (tick_count+val)
#define tick_increment() (tick_count++)

#endif
