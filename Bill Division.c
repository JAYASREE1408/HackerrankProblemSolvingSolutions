#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,ar[100000];
    int k,i,j;
    int b;
    int sum=0,diff=0,sum2=0;
    scanf("%d ",&n);
    scanf("%d\n",&b);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&ar[i]);
    }
    scanf("%d",&k);

    for(j=0;j<n;j++)
    {
        sum+=ar[j];
    }
    sum=sum-ar[b];
    
    sum2=sum/2;
    diff=k-sum2;
    if(sum2==k)
    {
      printf("Bon Appetit");
    }
    else
    {
         printf("%d",diff);
       
    }
    
    return 0;
}

 

