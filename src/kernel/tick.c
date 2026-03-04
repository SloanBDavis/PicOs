#include "tick.h"
#include "rtos_config.h"

static volatile uint32_t tick_count = 0;

void tick_init(void) {
}

uint32_t tick_get_count(void) {
    return tick_count;
}
