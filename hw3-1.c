#include <stdio.h>
#include <stdlib.h>

main()
{
    int i,j,k=0;
    scanf("%d",&i);
    if(i>1){
        for(j=2;j<i;j++){
            if(i%j==0){
                k=0;
                break;
                }
            else{
                k=1;
                }
            }
        if(k==0){
        printf("NO");
        }
        else if(k==1){
        printf("YES");

        }

    //printf("%d",k);
    //printf("%d",i%j);
    }
}


