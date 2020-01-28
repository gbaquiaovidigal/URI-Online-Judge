#include<stdio.h>

main(){


int l,c,i,X1,X2;
char p;
double M[12][12],S;

X1=0;
X2=11;

scanf(" %c",&p);

for(l=0;l<12;l++){
    for(c=0;c<12;c++){

        scanf("%lf",&M[l][c]);
}}


for(l=11;l>5;l--){
    for(c=0;c<12;c++){

        if((c>X1)&&(c<X2)){
            S=M[l][c]+S;
        }
    }
   X1++;
   X2--;
}

    if(p=='M'){
        printf("%.1lf\n",S/30);
    }

    else{
        printf("%.1lf\n",S);}
}

