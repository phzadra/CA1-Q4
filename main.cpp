#include "mbed.h"

int a = 10;
int b = 20;
int c = 30;

int main()
{
    int d = a+b;
    printf("d = %i\r\n\n", d);
    int e = d-c;
    printf("e = %i\r\n\n", e);
    while (true) {
    }
}

