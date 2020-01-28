#include<stdio.h>

main(){

int N,cont,dias;
float comida;

scanf("%d",&N);

for(cont=0;cont<N;cont++){
    scanf("%f",&comida);
    dias=0;

    while(comida>1){
        comida=(comida/2);
        dias++;
    }
    printf("%d dias\n", dias);

}

}
