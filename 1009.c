#include<stdio.h>

main()
{
    char NOME[30] ;
    double SFIXO,M,TOTAL ;
    scanf ("%s",&NOME) ;
    scanf ("%lf",&SFIXO) ;
    scanf ("%lf",&M) ;
    TOTAL=SFIXO+(0.15*M) ;
    printf ("TOTAL = R$ %.2lf\n",TOTAL) ;
}
