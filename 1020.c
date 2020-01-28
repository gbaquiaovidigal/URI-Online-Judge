#include<stdio.h>

main()
{
    int X,ANO,RANO,MES,RMES,DIA;

    scanf("%d",&X);

    ANO=X/365;
    RANO=X%365;
    MES=RANO/30;
    RMES=RANO%30;
    DIA=RMES;

    printf("%d ano(s)\n",ANO);
    printf("%d mes(es)\n",MES);
    printf("%d dia(s)\n",DIA);
}
