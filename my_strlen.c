#include <stddef.h>

size_t my_strlen(const char* s) {
    size_t length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}
