#include "task.h"

void idle_task(void *params) {
    (void)params;

    while (1) {
        __asm volatile("wfi");
    }
}
