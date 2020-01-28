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

main(){
    int i,j,k,N,M[201][201],V[400],cont=0,x,y;

    scanf("%d",&N);

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d",&M[i][j]);
        }
    }

    for(k=0;k<2*N;k++){
        scanf("%d %d",&x,&y);
        V[k] = M[x-1][y-1];
    }

    QuickSort(V,0,k-1);

    for(k=0;k<2*N;k++){
        if(V[k] != V[k+1]){
            cont++;}
    }

    printf("%d\n",cont);

}
