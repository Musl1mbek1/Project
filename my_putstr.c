#include <stdio.h>

int my_putchar(char c) {
    return write(1, &c, 1);
}

void my_putstr(char* param_1) {
    int i = 0;
    while (param_1[i] != '\0') {
        my_putchar(param_1[i]);
        i++;
    }
}
