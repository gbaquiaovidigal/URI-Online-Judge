#include<stdio.h>

main()
{
    int X,CEM,CINQ,VINTE,DEZ,CINCO,DOIS,UM,RCEM,RCINQ,RVINTE,RDEZ,RCINCO,RDOIS;

    scanf("%d",&X);


    CEM=X/100;
    RCEM=X%100;
    CINQ=RCEM/50;
    RCINQ=RCEM%50;
    VINTE=RCINQ/20;
    RVINTE=RCINQ%20;
    DEZ=RVINTE/10;
    RDEZ=RVINTE%10;
    CINCO=RDEZ/5;
    RCINCO=RDEZ%5;
    DOIS=RCINCO/2;
    RDOIS=RCINCO%2;
    UM=RDOIS/1;

    printf("%d\n",X);
    printf("%d nota(s) de R$ 100,00\n",CEM);
    printf("%d nota(s) de R$ 50,00\n",CINQ);
    printf("%d nota(s) de R$ 20,00\n",VINTE);
    printf("%d nota(s) de R$ 10,00\n",DEZ);
    printf("%d nota(s) de R$ 5,00\n",CINCO);
    printf("%d nota(s) de R$ 2,00\n",DOIS);
    printf("%d nota(s) de R$ 1,00\n",UM);






}
