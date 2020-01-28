#include<stdio.h>

main(){


int l,c,i,X1=0,X2=11;
char p;
double M[12][12],S;

scanf(" %c",&p);

for(l=0;l<12;l++){
    for(c=0;c<12;c++){

        scanf("%lf",&M[l][c]);
}}

for(c=11;c>6;c--){
    for(l=0;l<12;l++){

        if((l>X1)&&(l<X2)){
            S=M[l][c]+S;
        }}
   X1++;
   X2--;
}
    if(p=='M'){
        printf("%.1lf\n",S/30);
    }

    else{
        printf("%.1lf\n",S);}
}


