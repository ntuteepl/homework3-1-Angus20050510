#include <stdio.h>
#include <stdlib.h>

main()
{
    int i,k;
    scanf("%d",&i);
    if(i>1){
        for(int j=2;j<i;j++){
            if(i%j==0){
                k=0;
                }
            else{
                k=1;
                }
            }

    }
    else
        printf("NO");

    //printf("%d",k);
    if(k==0){
        printf("NO");
    }
    else if(k==1){
        printf("YES");
    }
}
