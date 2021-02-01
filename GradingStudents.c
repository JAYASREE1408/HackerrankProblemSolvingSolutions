#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int n,c;
    scanf("%d", &n);
    int a[n];
    int result[n];
    for(int i = 0;i < n; i++){
       scanf("%d",&a[i]);
       if(a[i]%5 != 0 )
        {
            c=a[i]; while(c%5 !=0)

            c++;
            if((c-a[i])<3 && c >= 40)
                    result[i]=c;
            else
                result[i]=a[i];
         }
        else
             result[i]=a[i];
    }
    
    for(int i = 0; i < n; i++) {
       
    
        
        printf("%d\n", result[i]);
    }
    
    return 0;
}
