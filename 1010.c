#include<stdio.h>

main()
{
    int COD1,N1,COD2,N2 ;
    float V1,V2,VT ;
    scanf ("%d %d %f",&COD1,&N1,&V1);
    scanf ("%d %d %f",&COD2,&N2,&V2);
    VT=(N1*V1)+(N2*V2);
    printf ("VALOR A PAGAR: R$ %.2f\n",VT);
}
