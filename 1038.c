#include<stdio.h>

main()
{
    int cod,quant;
    double t;

    scanf("%d",&cod);
    scanf("%d",&quant);

    if(cod==1) {
        t=quant*4.00 ; }

    else if(cod==2) {
        t=quant*4.50 ; }

    else if(cod==3) {
        t=quant*5.00 ; }

    else if(cod==4) {
        t=quant*2.00 ; }

    else if(cod==5) {
        t=quant*1.50 ; }


    printf("Total: R$ %.2lf\n",t);



}
