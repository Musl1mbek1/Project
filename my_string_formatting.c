#include <stdio.h>

void my_string_formatting(char* param_1, char* param_2, int param_3) {
    printf("Hello, my name is %s %s, I'm %d.\n", param_1, param_2, param_3);
}

int main() {
    // Example 01
    my_string_formatting("John", "doe", 37);
    // Output: Hello, my name is john doe, I'm 37.

    // Example 02
    my_string_formatting("Baby", "Yoda", 50);
    // Output: Hello, my name is Baby Yoda, I'm 50.

    // Example 03
    my_string_formatting("Marie", "Curie", 26);
    // Output: Hello, my name is Marie Curie, I'm 26.

    return 0;
}
