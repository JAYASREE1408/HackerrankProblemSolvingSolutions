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
    int a,b,m,n,s,t;
    scanf("%d %d %d %d %d %d",&s,&t,&a,&b,&m,&n);
    int apple[m];
    int ora[n];
    for(int i=0;i<m;i++)
      scanf("%d",&apple[i]);
    for(int i=0;i<n;i++)
      scanf("%d",&ora[i]);
    for(int i=0;i<m;i++)
     apple[i]=apple[i]+a;
    for(int i=0;i<n;i++) 
      ora[i]=ora[i]+b;
    int count=0;
    int cnt=0;  
    for(int i=0;i<m;i++)
    {
        if((apple[i]>=s) && (apple[i]<=t))
       count++;
    } 
    for(int i=0;i<n;i++)
    {
        if((ora[i]>=s) && (ora[i]<=t))
       cnt++;
    }   
    printf("%d\n%d",count,cnt);
}
