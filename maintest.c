#include "main.h"
#include <stdio.h>
#include <unistd.h>

int main() {
    char rev[10];
    rev[0] = '\0';
    int_to_str(rev, 278983);
    write(1, rev, _strlen(rev));

    write(1, "\n", 1);
    return 0;
}
