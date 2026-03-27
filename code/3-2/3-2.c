#include <stdio.h>

void swap_endian(int* x) {
    char *p = (char*)x;

    
}

int main(){
    int x = 0x12345678;

    printf("%x\n", x);
    swap_endian(&x);
    printf("%x\n", x);

    return 0;
}