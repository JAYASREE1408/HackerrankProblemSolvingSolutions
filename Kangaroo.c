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
    int k1,k2,x1,x2,v1,v2,i;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
    k1=x1;
    k2=x2;
      
if(v1>v2)
{
    if((x2-x1)%(v1-v2) == 0)
        printf("YES");
    else
        printf("NO");
}
else 
    printf("NO");
}
   
//OR
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int x1,v1,x2,v2,i,j,a[10000],b[10000],yes=0;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    for(i=1;i<10000;i++){
        a[0]=x1;
        a[i]=a[i-1]+v1;
    }
    for(i=1;i<10000;i++){
        b[0]=x2;
        b[i]=b[i-1]+v2;
    }
    for(i=0;i<10000;i++){
            if(a[i]==b[i])
            yes++;
        
    }
    if(yes>0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
