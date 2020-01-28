#include<stdio.h>

main(){

    int TESTES,cont;
    float nota1,nota2,nota3,Media;


    scanf("%d",&TESTES);

    for(cont=0;cont<TESTES;cont++){
        scanf("%f",&nota1);
        scanf("%f",&nota2);
        scanf("%f",&nota3);


        Media=((nota1*2.0)+(nota2*3.0)+(nota3*5.0))/10;

        printf("%.1f\n",Media);
    }

}
