#include <stdbool.h>

// Function prototype declaration
bool leap_year(int year);

// Function implementation
bool leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}