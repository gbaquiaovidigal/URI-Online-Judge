#include<stdio.h>

main()
{
    int N,cont,cont2=0,soma=0,X,Y;

    scanf("%d",&N);

    do{

    cont=0;
    cont2++;
    soma=0;

    scanf("%d %d",&X,&Y);

   if(X<Y){

   cont=X;

   while(cont<Y){
    cont=cont+1;

     if((cont%2!=0)&&(cont!=Y))
     soma=soma+cont;
   }
   }
   else if(X>Y){

    cont=Y;

    while(cont<X){
    cont=cont+1;

     if((cont%2!=0)&&(cont!=X))
     soma=soma+cont;
        }
   }

   else if(X==Y){}

    printf("%d\n",soma);

    }while(cont2<N);


}
