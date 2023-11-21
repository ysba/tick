# tick
Simple helper for embedded bare-metal applications dealing with multiple time-dependant tasks.

## Usage
```c
#include "tick/tick.h"

#define TASK_1_INTERVAL     100     // ms
#define TASK_2_INTERVAL     300     // ms
#define TASK_3_INTERVAL     1000    // ms

void main() {
    tick_t timer_task_1;
    tick_t timer_task_2;
    tick_t timer_task_3;

    // initial values
    timer_task_1 = tick_set(TASK_1_INTERVAL);
    timer_task_2 = tick_set(TASK_2_INTERVAL); // 300 ms
    timer_task_3 = tick_set(TASK_3_INTERVAL); // 1 s

    // main loop runs forever and enters each task whenever its timer reach the defined interval
    while(1) {

        if (tick_compare(timer_task_1)) {
            // reload task 1 timer
            timer_task_1 = tick_set(TASK_1_INTERVAL);

            /*
                performs task 1 operations
            */
        }

        if (tick_compare(timer_task_2)) {
            // reload task 2 timer
            timer_task_2 = tick_set(TASK_2_INTERVAL);

            /*
                performs task 2 operations
            */
        }

        if (tick_compare(timer_task_3)) {
            // reload task 3 timer
            timer_task_3 = tick_set(TASK_3_INTERVAL);

            /*
                performs task 3 operations
            */
        }

        /*
            perform other tasks, if any...
        */
    }
}
```

## Change log

*  ``v0.0.1``
  * Initial
