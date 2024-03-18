 #include <stdio.h>

int my_add(int param_1, int param_2) {
    return param_1 + param_2;
}

int main() {
    int result = my_add(0, 1);
    printf("Result: %d\n", result);  // Output: Result: 1
    int result = my_add(10, 10);
    printf("Result: %d\n", result); // Output: Result: 20
    int result = my_add(-10, 10);
    printf("Result: %d\n", result);
    return 0;
}
