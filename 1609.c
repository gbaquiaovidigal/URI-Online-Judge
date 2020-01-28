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
    int T,i;
    int N,j;

    int c;

    scanf("%d",&T);

    for(i=0;i<T;i++){
        c = 0;
        scanf("%d",&N);
        int carneiros[N];

        for(j=0;j<N;j++){
           scanf("%d",&carneiros[j]);
        }

        QuickSort(carneiros,0,(N-1));

        for(j=0;j<N;j++){
           if(carneiros[j] != carneiros[j+1]){
           c++;
           }

        }
        printf("%d\n",c);
    }

}
