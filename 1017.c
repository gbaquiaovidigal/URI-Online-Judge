#include<stdio.h>

main()
{
    float TEMPO,VM,LITROS;
    scanf("%f",&TEMPO);
    scanf("%f",&VM);

    LITROS=(TEMPO*VM)/12;

    printf("%.3f\n",LITROS);
}
