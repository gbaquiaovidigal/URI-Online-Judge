#include<stdio.h>

main(){


int l,c,i,X,X2;
char p;
double M[12][12],S;

X=10;
X2=0;

scanf("%c",&p);

for(l=0;l<12;l++){
    for(c=0;c<12;c++){

        scanf("%lf",&M[l][c]);

    if(c<X && c>X2 && l<5){

            S=M[l][c]+S;

        }
    }
    X--;
    X2++;
}

    if(p=='M'){
        printf("%.1lf\n",S/30);
    }

    else
        printf("%.1lf\n",S);
}

