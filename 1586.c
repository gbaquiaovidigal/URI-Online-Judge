#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int N;
bool marq[100002];

int BuscaBinaria(int *v,int esq,int dir){

    int meio = (esq + dir) /2;
    long long int TA = 0;
    long long int TB = 0;
    int b = meio+1;
    int a = 1;
    int i;

    for(i=0;i<N;i++){
        if(i<=meio){
           TA+=v[i]*b;
           b--;
        }
        else{
            TB+=v[i]*a;
            a++;
        }
    }

    if(marq[meio])
        return -1;
    marq[meio] = true;
    if(TA == TB){
        return meio;
    }
    else if(TA > TB){
        BuscaBinaria(v,esq,meio-1);
    }
    else
        BuscaBinaria(v,meio+1,dir);

}


int main(){

    while(scanf("%d",&N),N){

        char nome[N][102];
        int pontos[N],r;

        memset(pontos,0,sizeof(pontos));
        memset(marq,0,sizeof(marq));

        int i,j;

        for(i=0;i<N;i++){
            scanf("%s",nome[i]);

            int tam = strlen(nome[i]);

            for(j=0;j<tam;j++)
                pontos[i]+=nome[i][j];
        }

      r =  BuscaBinaria(pontos,0,N-1);

      if(r == -1)
        printf("Impossibilidade de empate.\n");
      else
        printf("%s\n",nome[r]);
    }
}

