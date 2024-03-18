#include <stdio.h>
#include <string.h>

char* reverse_string(char* param_1) {
    int length = strlen(param_1);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = param_1[i];
        param_1[i] = param_1[j];
        param_1[j] = temp;
    }

    return param_1;
}

int main() {
    char my_str[] = "Nothing Else Matters";

    printf("Before reverse: %s\n", my_str);
    printf("Reverse: %s\n", reverse_string(my_str));

    return 0;
}
