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

    int i, j, igual, cont, r, r2, testes, v1, v2, vBusca,v[10000];

    while((scanf("%d",&testes)!=EOF)&&(testes != EOF)){
    cont = 0;
    igual = 0;
        for(i=0;i<testes;i++){
                scanf("%d",&v1);
                scanf("%d",&v2);

                for(j=v1;j<=v2;j++){
                    v[cont] = j;
                    cont++;
                }
        }

        QuickSort(v,0,cont-1);

        scanf("%d",&vBusca);



        r = pesquisaBinaria(v,vBusca,0,cont-1);



        //for(i=0;i<cont;i++){
           //printf("%d ",v[i]);}
       // printf("\n");

        if(r >= 0){
           while(v[r] == vBusca){
            r--;
            }

        r++;

            if(r < 0){
            r = 0;
            }

            r2 = r;

            while(v[r2] == vBusca){
            r2++;
            }
            printf("%d found from %d to %d\n",vBusca,r,r2-1);
        }

        else{
            printf("%d not found\n",vBusca);

        }
    }
}
