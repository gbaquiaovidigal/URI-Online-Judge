#include<stdio.h>

main()
{
    float X;
    int T1=0,cont=0;




    while(cont<6){
        scanf("%f",&X);

        if(X>0){
        T1=T1+1;
        }
        cont++;
        }
    printf("%d valores positivos\n",T1);
}
