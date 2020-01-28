#include<stdio.h>

main(){
int x,soma=0,i=0,cont=0;

    while(1){

        scanf("%d",&x);
        cont=x;

        if(x==0){
            break;
        }

        while(i<5){

            if((cont%2)==0){
            soma=cont+soma;
            i++;
    }
     cont++;

        }
        printf("%d\n",soma);
}

}
