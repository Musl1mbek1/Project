#include <stdio.h>
int my_abs(int param_1) {
    if (param_1 < 0) {
        return -param_1;
    } else {
        return param_1;
    }
}
int main() {
    printf("%d\n", my_abs(-30));  // Output: 30
    printf("%d\n", my_abs(30));   // Output: 30
    printf("%d\n", my_abs(0));    // Output: 0

    return 0;
}
