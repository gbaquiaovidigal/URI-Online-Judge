
#include<stdio.h>

main(){

    char s1[6001],s2[6001];
    int a,b,aux1,aux2,n;

    scanf("%d",&n);
    for(a=0;a<n;a++){
        scanf("%s %s",s1,s2);
        for(b=0;b<=50;b++){
            if(s1[b]!='\0'&&aux1!=1){
                printf("%c",s1[b]);
            } else {
                aux1=1;
            }
            if(s2[b]!='\0'&&aux2!=1){
                printf("%c",s2[b]);
            } else {
                aux2=1;
            }
            if(aux1==1&&aux2==1){
            break;
            }
        }
        printf("\n");
        aux1=0;
        aux2=0;
    }

}
