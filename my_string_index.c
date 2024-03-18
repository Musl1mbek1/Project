#include <stdio.h>

int my_string_index(char* haystack, char needle) {
    int position = -1;
    int i = 0;
    
    while (haystack[i] != '\0') {
        if (haystack[i] == needle) {
            position = i;
            break;
        }
        i++;
    }
    
    return position;
}

int main() {
    // Example 00
    int index_00 = my_string_index("hello", 'l');
    printf("Index of 'l' in 'hello': %d\n", index_00);
    // Output: Index of 'l' in 'hello': 2

    // Example 01
    int index_01 = my_string_index("aaaaa", 'b');
    printf("Index of 'b' in 'aaaaa': %d\n", index_01);
    // Output: Index of 'b' in 'aaaaa': -1

    return 0;
}
