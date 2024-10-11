#include <assert.h>
#include "str2int.h"
#include "stdio.h"

int str2int(const char *str) {
    int m_sign = 1;
    int result = 0;
    if (*str == '-'){
        m_sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }
    
    int m_count = 0;
    while (*str != '\0') {
        assert (result < 214748364 || 
               (result == 214748364 && (*str - '0') < 8 && m_sign == 1) ||
               (result == 214748364 && (*str - '0') < 9 && m_sign == -1));     
        result = result * 10 + (*str - '0');
        m_count++;
        str++;
    }
    assert(m_count > 0);
    return result * m_sign;
}
