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
    int n,a[10000],i;
    float count=0,b=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
          count=count+1;
        if(a[i]>0)
          b=b+1;
        if(a[i]==0)
          c=c+1;      

    }
    printf("%f\n%f\n%f",b/n,count/n,c/n);
}
