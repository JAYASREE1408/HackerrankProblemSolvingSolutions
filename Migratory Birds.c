#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
 
int main(){
    int n,j=0,max=0; 
    scanf("%d",&n);
    int type[5],b;
    for(int i=0;i<5;i++)
        type[i]=0;
    for(int i=0;i<n;i++)
        {
        scanf("%d",&b);
        type[b-1]++;
    }
    for(int i=0;i<5;i++){
        if(type[i]>max)
            j=i+1,max=type[i];
    }
    
    printf("%d",j);
}
