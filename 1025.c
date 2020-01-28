#include<stdio.h>

void QuickSort(int vet[ ], int esq, int dir){
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
        QuickSort(vet, esq, j);
        if ( i < dir )
        QuickSort(vet, i, dir);
}

int pesquisaBinaria(int vet[],int dado, int inic, int fim){

    int meio = (inic + fim)/2;
    int i;



    if( vet[meio] == dado )
        return(meio);

    if (inic >= fim)
        return(-1);

    if (dado < vet[meio])
        pesquisaBinaria(vet,dado,inic,meio-1);

    else
        pesquisaBinaria(vet,dado,meio+1,fim);
}

main(){
    int i,j,N=1,Q=1,c=1;



    while((N!=0)&&(Q!=0)){
        scanf("%d %d",&N,&Q);

        if((N==0) && (Q == 0)){
            break;
        }

        else{
        int vet[N];
        for(i=0;i<N;i++){

        scanf("%d",&vet[i]);
        }

        QuickSort(vet,0,N-1);

        int pos[Q],r[Q];

        for(j=0;j<Q;j++){
            scanf("%d",&pos[j]);
            r[j] = pesquisaBinaria(vet,pos[j],0,N-1);
        }


        printf("CASE# %d:\n",c);
        for(j=0;j<Q;j++){

        if(r[j] == -1){
        printf("%d not found\n",pos[j]);
        }
        else{
            while(vet[r[j]]==pos[j]){       // Faz isto pra garantir que vai achar a primeira posição
            r[j]--;
        }
        printf("%d found at %d\n",pos[j],r[j]+2);
        }}
    c++;
    }
    }
    }

