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
     int n,a=0,b=0,arr[1000][1000],sum=0;
     int i,j;
     scanf("%d",&n);
     for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    for(i=0;i<n;i++)
        a=a+arr[i][i];
    for(i=0;i<n;i++)
        b=b+arr[i][n-1-i];
    sum=abs(a-b);
    printf("%d",sum);
            

 }
