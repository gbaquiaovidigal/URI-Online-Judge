#include<stdio.h>

main(){

    int N,i,cont,j,k;

    scanf("%d",&N);

    char a[1001],b[1001];

    for(i=0;i<N;i++){
        scanf("%s",a);
        scanf("%s",b);

        cont=0;

        for(j = strlen(b), k = strlen(a) ; j >= 0; j--, k--){
                if(a[k] == b[j]) cont++;

          }
          if(cont == strlen(b)+1) printf("encaixa\n");
          else printf("nao encaixa\n");
    }

}
