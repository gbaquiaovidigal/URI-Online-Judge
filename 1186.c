#include<stdio.h>

main(){


int l,c,i,X;
char p;
double M[12][12],S;

X=11;

scanf("%c",&p);

for(l=0;l<12;l++){
    for(c=0;c<12;c++){

        scanf("%lf",&M[l][c]);

        if(c>X){

            S=M[l][c]+S;

        }
    }
    X--;
}
    if(p=='M'){
        printf("%.1lf\n",S/66);
    }

    else
        printf("%.1lf\n",S);
}
