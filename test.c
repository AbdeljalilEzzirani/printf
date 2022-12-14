#include "printf.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>


int main(){

char *p = NULL;
    printf("   %d   \n", ft_printf("   %d   %i    %s    %c     %p     %x    %u    %X  %%       ",INT16_MAX, INT16_MIN, p, 'c', &p, INT8_MIN, INT32_MAX, INT8_MIN));
    printf("   %d   \n", printf("   %d   %i    %s    %c     %p     %x    %u    %X  %%       ", INT16_MAX, INT16_MIN, p, 'c', &p, INT8_MIN, INT32_MAX, INT8_MIN));

}