#include<stdio.h>

void PAR(int vet[ ], int esq, int dir){     ///QuickSort Crescente
    int i=esq, j=dir;
    int x,y;
    x = vet[(esq+dir)/2];
        do{
            while ((vet[i] < x) && (i < dir))
            i++;
            while ((x < vet[j]) && (j > esq))
            j--;
            if ( i <= j ){
                y = vet[i];
                vet[i] = vet[j];
                vet[j] = y;
                i++;
                j--;
            }
        }while ( i <=j );

        if ( esq < j )
        PAR(vet, esq, j);
        if ( i < dir )
        PAR(vet, i, dir);
}

void IMPAR(int vet[ ], int esq, int dir){   ///QuickSort Decrescente
    int i=esq, j=dir;
    int x,y;
    x = vet[(esq+dir)/2];
        do{
            while ((vet[i] > x) && (i < dir))
            i++;
            while ((x > vet[j]) && (j > esq))
            j--;
            if ( i <= j ){
                y = vet[i];
                vet[i] = vet[j];
                vet[j] = y;
                i++;
                j--;
            }
        }while ( i <=j );

        if ( esq < j )
        IMPAR(vet, esq, j);
        if ( i < dir )
        IMPAR(vet, i, dir);
}

main(){
    int N,i,V,VP[100000],VI[100000];
    int imp = 0,par = 0;
    scanf("%d",&N);

    for(i=0;i<N;i++){

        scanf("%d",&V);

        if(V%2 ==0){
            VP[par] = V;
            par++;
        }

        else if(V%2 != 0){
            VI[imp] = V;
            imp++;
        }

    }

        PAR(VP,0,par-1);
        IMPAR(VI,0,imp-1);

    for(i=0;i<par;i++)
        printf("%d\n",VP[i]);

    for(i=0;i<imp;i++)
        printf("%d\n",VI[i]);

    }


