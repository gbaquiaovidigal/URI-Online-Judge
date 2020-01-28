#include<stdio.h>

main()
{
    int N,h,m,s,Rh,Rm;

    scanf("%d",&N);

    h=N/3600;
    Rh=N%3600;
    m=Rh/60;
    Rm=Rh%60;
    s=Rm;

    printf("%d:%d:%d\n",h,m,s);


}
