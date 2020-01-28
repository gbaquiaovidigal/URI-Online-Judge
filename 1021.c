#include<stdio.h>

main()
{
    float N,CEM,RCEM,CINQ,RCINQ,VINTE,RVINTE,DEZ,RDEZ,CINCO,RCINCO,DOIS,RDOIS,UM,RUM,CINQCENT,RCINQCENT,VINTCENT,RVINTCENT,DEZCENT,RDEZCENT,CINCOCENT,RCINCOCENT,UMCENT;

    scanf("%f",&N);

    CEM=N/100;
    RCEM=N%100;
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

    UM=RDOIS/1.0;
    RUM=RDOIS%1.0;
    CINQCENT=RUM/0.5;
    RCINQCENT=RUM%0.5;
    VINTCENT=RCINQCENT/0.25;
    RVINTCENT=RCINQCENT%0.25;
    DEZCENT=RVINTCENT/0.10;
    RDEZCENT=RVINTCENT%0.10;
    CINCOCENT=RDEZCENT/0.05;
    RCINCOCENT=RDEZCENT%0.05;
    UMCENT=RCINCOCENT;

    printf("NOTAS:\n");
    printf("%f nota(s) de R$ 100.00\n",CEM);
    printf("%f nota(s) de R$ 50.00\n",CINQ);
    printf("%f nota(s) de R$ 20.00\n",VINTE);
    printf("%f nota(s) de R$ 10.00\n",DEZ);
    printf("%f nota(s) de R$ 5.00\n",CINCO);
    printf("%f nota(s) de R$ 2.00\n",DOIS);
    printf("MOEDAS:\n");
    printf("%f moeda(s) de R$ 1.00",UM);
    printf("%f moeda(s) de R$ 0.50",CINQCENT);
    printf("%f moeda(s) de R$ 0.25",VINTCENT);
    printf("%f moeda(s) de R$ 0.10",DEZCENT);
    printf("%f moeda(s) de R$ 0.05",CINCOCENT);
    printf("%f moeda(s) de R$ 0.01",UMCENT);
}
