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
    int i,n,a[n],m,d,count=0,sum=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d\n",&a[i]);
    scanf("%d %d",&d,&m);
    for(i=0;i<=n-1;i++)
    
    {
      sum=0;
        for(int j=0;j<m;j++)
        {
        sum=sum+a[i+j];
        }
       
       if(sum==d) 
       count=count+1;    
       
    }
         printf("%d",count);
        
 
       
}

or

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
int main(){
    int n,i,j,d,m,sum=0,count=0;
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++) {
    scanf("%d",&a[i]);
    }
    scanf("%d %d",&d,&m);
        
    for(i=0;i<n;i++){
        sum=0;
        for(j=i;j<i+m;j++){
            sum=sum+a[j];
            }
            if(sum==d){
                count++;

        }
    }
    printf("%d",count);
}



