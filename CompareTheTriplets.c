#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{   
    int i, a_count=0,b_count=0,a[3],b[3];
    for( i = 0; i < 3; i++)
        scanf("%d",&a[i]);
    for( i = 0; i < 3; i++)
        scanf("%d",&b[i]);
    for( i = 0; i < 3; i++)
    {
        if(a[i] > b[i])
        {
            a_count++;
        }

        if(a[i] < b[i])
        {
            b_count++;
        }
    }
 printf("%d %d",a_count,b_count);
 return 0;
} 


   
