#include<stdio.h>
#include<stdlib.h>

#define TAMANHO 9

main(){

    int a,b,c,d,n,mat[9][9],*vec,aux=0,aux2=0;
    int x;

    scanf("%d",&n);

    for(a=0;a<n;a++){
        for(b=0;b<9;b++){
            for(c=0;c<9;c++){
                scanf("%d",&mat[b][c]);
            }
        }
        for(b=0;b<TAMANHO;b++){
            vec = (int *)calloc(TAMANHO,sizeof(int));

            for(c=0;c<TAMANHO;c++){                 ///linha
                aux=mat[b][c];
                vec[aux]++;
            }
            for(c=1;c<TAMANHO;c++){
                if(vec[c]!=1){
                    aux2=1;
                    goto fim;
                }
            }

            for(c=0;c<TAMANHO;c++){                 ///coluna
                aux=mat[c][b];
                vec[aux]++;
            }
            for(c=1;c<TAMANHO;c++){
                if(vec[c]!=2){
                    aux2=1;
                    goto fim;
                }
            }
        }
        for(d=0;d<TAMANHO;d+=3){
            vec = (int *)calloc(TAMANHO,sizeof(int));
            for(b=0;b<3;b++){
                for(c=d;c<d+3;c++){
                    aux=mat[b][c];
                    vec[aux]++;
                }
            }
            for(c=1;c<TAMANHO;c++){
                if(vec[c]!=1){
                    aux2=1;
                    goto fim;
                }
            }
            for(b=3;b<6;b++){
                for(c=d;c<d+3;c++){
                    aux=mat[b][c];
                    vec[aux]++;
                }
            }
            for(c=1;c<TAMANHO;c++){
                if(vec[c]!=2){
                    aux2=1;
                    goto fim;
                }
            }
            for(b=6;b<TAMANHO;b++){
                for(c=d;c<d+3;c++){
                    aux=mat[b][c];
                    vec[aux]++;
                }
            }
            for(c=1;c<TAMANHO;c++){
                if(vec[c]!=3){
                    aux2=1;
                    goto fim;
                }
            }
        }
        fim:
        printf("Instancia %d\n",a+1);
        if(aux2==1){
            printf("NAO\n");
        } else {
            printf("SIM\n");
        }
        printf("\n");
        aux2=0;
    }

}
