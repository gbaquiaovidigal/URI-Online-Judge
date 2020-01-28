#include<stdio.h>

main(){


int l,c,i;
char O;
double M[12][12],Soma,Me;


scanf(" %c",&O);

for(l=0;l<12;l++){
    for(c=0;c<12;c++){

        scanf("%lf",&M[l][c]);

        if(c>l){

            Soma=M[l][c]+Soma;

        }
    }
}
         if(O== 'M' ){

                printf("%.1lf\n",Soma/66);
            }

    else if(O== 'S'){
                printf("%.1lf\n",Soma);
            }



}
