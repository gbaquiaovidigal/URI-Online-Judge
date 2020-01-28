#include<stdio.h>
main () {
    int N,cont;

    cont=0;
    scanf("%d",&N);

    while(cont<N){
        cont=cont+1;
            if(cont%2!=0)
            printf("%d\n",cont);
    }
}
