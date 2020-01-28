#include<stdio.h>

void Lanche(int num[], int Tamanho){
    int aux,i,j;
        for(i = 0; i < Tamanho-1; i++)
            for(j = Tamanho-1; j > i; j--){
                if ( num[j] > num[j-1] ){
                    aux=num[j];
                    num[j]= num[j-1];
                    num[j-1]=aux;   }
            }
}

main(){

    int N,M,vec[100000],vec2[100000],i,a,cont=0;

    scanf("%d",&N);

    for(i=0;i<N;i++){
        scanf("%d",&M);

        for(a=0;a<M;a++){
            scanf("%d",&vec[a]);
            vec2[a] = vec[a];
        }

        Lanche(vec,M);

        for(a=0;a<M;a++){
            if(vec[a]==vec2[a]){
                cont++;
            }
        }

        printf("%d\n",cont);
        cont=0;
    }

}
