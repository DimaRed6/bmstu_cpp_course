#include "int2str.h"
#include <stdlib.h>


char* int2str(int num) {
    char * str = calloc(12, sizeof(char));
    int len = 0;

    unsigned int number = 0;
    if (num < 0) {
        len++;
        str[0] = '-';
        number = num * -1;
    } else {
        number = num;
    }

      int copy = number;
    int count = 0;
    while ((copy == 0 && count < 1) || copy > 0) {
        copy /= 10;
        len++;
        count++;
    }

    int digit = 0;
    count = 0;
    char ch = 0;
    while ((number == 0 && count < 1) || number > 0) {
        digit = number % 10;
        number = number / 10;
        ch = digit + '0';
        str[len - 1 - count] = ch;
        count++;
    }
    str[len] = '\0';

    return str;
}
