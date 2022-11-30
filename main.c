#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

bool hero(uint32_t bullets, uint32_t dragons);

int main() {

    int drags = 2;
    int bulls = 5;
    if (hero(bulls, drags))
        printf("Yes he will survive :) \n");
    else
        printf("He will die :( \n");
    return 0;
}

bool hero(uint32_t bullets, uint32_t dragons){
    return bullets >= dragons * 2;
}
