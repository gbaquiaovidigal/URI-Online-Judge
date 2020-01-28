#include<stdio.h>

main()
{
    int cont=0,Num,X,Y;

    scanf("%d",&X);
    scanf("%d",&Y);


    if(X>Y){
        int Aux=Y;
        Y=X;
        X=Aux;
    }

    Num=X+1;

    do{
        if(((Num%5)==2)||((Num%5)==3)){
            printf("%d\n",Num);
        }

        Num=Num+1;

    }while(Num<Y);

}
