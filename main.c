#include <stdio.h>

#define isDigit(c) ((c) >= '0' && (c) <= '9')
int main() {
    char znak = '1';

    isDigit(znak)? printf("jestem cyfrą")
                : printf("nie jestem cyfrą");
    return 0;
}