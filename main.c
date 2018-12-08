#include <stdio.h>

#define isDigit(c) ((c) >= '0' && (c) <= '9')
int main() {
    char znak = '1';

    if(isDigit(znak)){
        printf("jestem cyfrą");
    } else{
        printf("nie jestem cyfrą");
    }
    return 0;
}