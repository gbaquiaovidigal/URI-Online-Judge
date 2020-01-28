#include<stdio.h>
#include<stdlib.h>

main(){

    int a,b,c,i,x=1,n,**mat;

    mat = (int **)malloc(10 * sizeof(int *));

    for(i=0;i<10;i++){
        mat[i] = (int *)malloc(10 * sizeof (int));
    }

    scanf("%d",&n);
    for(a=0;a<n;a++){
        for(b=0;b<9;b++){
            for(c=0;c<9;c++){
                mat[b][c]=0;
            }
        }
        x=1;
        for(b=0;b<9;b+=2){
            for(c=0;c<x;c+=2){
                scanf("%d",&mat[b][c]);
            }
            x+=2;
        }
        x=9;
        for(b=8;b>0;b--){
            for(c=8;c>=0;c--){
                if(mat[b][c]==0&&b==8){
                    mat[b][c]=(mat[b-2][c-1]-(mat[b][c+1]+mat[b][c-1]))/2;
                } else if(mat[b][c]==0) {
                    mat[b][c]=mat[b+1][c+1]+mat[b+1][c];
                }
            }
        }
        x=1;
        for(b=0;b<9;b++){
            for(c=0;c<x-1;c++){
                printf("%d ",mat[b][c]);
            }
            printf("%d\n",mat[b][c]);
            x++;
        }
    }

    for(i=0;i<10;i++){
        free(mat[i]);
    }
    free(mat);
}
