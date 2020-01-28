#include<stdio.h>

main()
{
    double cont=0,X,Media=0,Soma=0;

    do{
        scanf("%lf",&X);

            if(X>0){
                Soma=Soma+X;
                cont++;
                }
                Media=Soma/cont;



    }while(X>0);

        printf("%.2lf\n",Media);

}
