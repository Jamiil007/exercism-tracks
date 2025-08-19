#include "grains.h"
#include <stdint.h>

uint64_t square(uint8_t index)
{
    if (index < 1 || index > 64) {
        return 0;
    }

    int i; // Your loop counter
    uint64_t k = 1; // Your accumulator. Start at 1 grain for the first square.

    // 3. The correct logic: For square 1, we don't double. For square 2, we double once, etc.
    // So we need to double the initial value (1) a total of (index - 1) times.
    for (i = 1; i < index; i++) {
        k = k * 2; // This is the doubling step
    }

    // 4. Return the result
    return k;
}

// You will also need to implement the 'total' function
uint64_t total(void) {
    uint64_t sum = 0;
    for (int i = 1; i <= 64; i++) {
        sum += square(i);
    }
    return sum;
}