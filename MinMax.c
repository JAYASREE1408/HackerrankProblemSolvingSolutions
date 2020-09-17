#include <assert.h>
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
     long int n,i,a[10000];
     long int sum=0,min,max;
    
    for(i=0;i<5;i++)
    scanf("%ld",&a[i]);
    sum=sum+a[0];min=a[0];max=a[0];
    for(i=1;i<5;i++)
    {
        
        if(max<a[i])
        max=a[i];
        if(min>a[i])
        min=a[i];
        sum=sum+a[i];
        
    }
    printf("%ld %ld",sum - max,sum - min);

}




