#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Value = %d\n", num);
    printf("Address = %p\n", ptr);
    printf("Using Pointer = %d", *ptr);

    return 0;
}
