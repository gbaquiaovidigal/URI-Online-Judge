#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define MAX 11

int main()
{
    int Linhas;
    int Colunas;
    int Solto;
    int i,j;

    while(scanf("%d %d %d",&Linhas,&Colunas,&Solto) && Linhas && Colunas && Solto)
    {
        int **M = (int**)malloc(MAX*sizeof(int*));


         for(i=1;i<=Linhas;i++)
        {
            M[i] = (int*)malloc(MAX*sizeof(int));
        }


        for(i=1;i<=Linhas;i++)
        {
            for(j=1;j<=Colunas;j++)
                scanf("%d",&M[i][j]);
        }

    int PosAtual=Solto;
    int VentiladorEsquerdo;
    int VentiladorDireito;
    int aux;
    int aux2;

    bool Estourou=false;

    int PosEstouroui;
    int PosEstourouj;
    for(i=1;i<=Linhas;i++)
    {
        if(i==1 && M[i][PosAtual]!=0)
        {
            Estourou=true;

            PosEstouroui=i;
            PosEstourouj=PosAtual;
            break;
        }

        for(j=PosAtual-1;j>=1;j--)
        {

           if(M[i][j]!=0)
            {
                VentiladorEsquerdo=M[i][j];
                break;
            }
        }
        for(j=PosAtual+1;j<=Colunas;j++)
        {
            if(M[i][j]!=0)
            {
                VentiladorDireito=M[i][j];
                break;
            }
        }
       if(Estourou)
        break;

       if(VentiladorEsquerdo<VentiladorDireito)
       {
           aux=VentiladorDireito-VentiladorEsquerdo;
           PosAtual-=aux;
           if(PosAtual==0)
            PosAtual=1;
       }
       else if(VentiladorEsquerdo>VentiladorDireito)
       {
           aux=VentiladorEsquerdo-VentiladorDireito;
           PosAtual+=aux;
           if(PosAtual==Colunas+1)
            PosAtual=Colunas;
       }
        if(M[i][PosAtual]!=0)
        {
                Estourou=true;

                PosEstouroui=i;
                PosEstourouj=PosAtual;
                break;
        }
        if(Estourou)
            break;

    }

    if(Estourou)
        printf("BOOM %d %d\n",PosEstouroui,PosEstourouj);
    else
        printf("OUT %d\n",PosAtual);

        for(i=1;i<=Linhas;i++)
        {
            free(M[i]);
        }
        free(M);
    }
}


