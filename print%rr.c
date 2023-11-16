#include "main.h"

int print_unknown(void) {
    return write(1, "%r", 2);
}
