#include<stdio.h>

int i;
void Biblioteca(int *,int);

main(){
    int N,cod[1000];

    while(scanf("%d",&N) != EOF)        // FIM DE ARQUIVO
    {
        for(i=0;i<N;i++){
            scanf("%d",&cod[i]);
	}
        Biblioteca(cod,N);

        for(i=0;i<N;i++){
            printf("%04d\n",cod[i]);
        }


    }
}

void Biblioteca(int vet[], int tam){
    int j;
    int aux;

        for(i = 0; i < tam-1; i++)
            for(j = tam-1; j > i; j--){
                if ( vet[j]<vet[j-1] ){
                    aux=vet[j];
                    vet[j]= vet[j-1];
                    vet[j-1]=aux;   }
            }
}
