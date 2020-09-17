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
    int n,i,a[100000],max;
    int count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        
    }  
    for(i=0;i<n;i++)   
     {
         if(a[i]==max)
            count++;
         
     }
    
    
printf("%d",count);
return 0;
}
