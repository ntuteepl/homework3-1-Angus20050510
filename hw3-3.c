#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,a1,a2,a3,a12,a22,a32,b1,b2,b3,b12,b22,b32,as,bs;
    scanf("%d%d",&a,&b);
    a1=a/1000;a12=a%1000;
    a2=a12/100;a22=a12%100;
    a3=a22/10,a32=a22%10;
    b1=b/1000;b12=b%1000;
    b2=b12/100;b22=b12%100;
    b3=b22/10,b32=b22%10;
    as=a1+a2+a3+a32;
    bs=b1+b2+b3+b32;
    if(as>bs){
       printf("%d",b);
    }
    else if(as<bs){
       printf("%d",a);
    }
    else if(as=bs){
            if(a>b){
                printf("%d",b);
            }
            else if(a<b){
                printf("%d",a);
            }

    }



    return 0;
}
