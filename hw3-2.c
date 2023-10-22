#include <stdio.h>
#include <stdlib.h>

main()
{
int s1,d1,s2,d2,s3,d3,s;
scanf("%d%d&d%d%d%d",&s1,&d1,&s2,&d2,&s3,&d3);
if(s2<d1){
    s++;
}
if(s3<d2){
    s++;
}
if(s3<d1){
    s++;
}
printf("%d\n",s);
return 0;
}
