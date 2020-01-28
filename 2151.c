#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int main(){

    int a,b,c,d,e;
    int C,x,y,i,aux;
    int **Hulk;


    scanf("%d",&C);
    for(a=0;a<C;a++){
        Hulk = (int **)malloc(MAX*sizeof(int*));

        for(i=0;i<MAX;i++){
        Hulk[i] = (int *)malloc(MAX*sizeof(int));
        }

        scanf("%d %d %d %d",&e,&c,&x,&y);

        for(b=0;b<e;b++){
            for(d=0;d<c;d++){
                scanf("%d",&Hulk[b][d]);
                aux=Hulk[b][d];
            }
        }
        for(b=0;b<e;b++){
            for(d=0;d<c;d++){
                if(b==x-1&&d==y-1){
                    Hulk[b][d]+=10;
                } else if(d>y-1) {
                    Hulk[b][d]+=(10-(d-y+1));
                } else if(d<y-1){
                    Hulk[b][d]+=(10-(y-d-1));
                }
                if(Hulk[b][d]>aux+10-(b-x+1)&&b>x){
                    Hulk[b][d]=aux+10-(b-x+1);
                } else if(Hulk[b][d]>aux+10-(x-b-1)&&b<x){
                    Hulk[b][d]=aux+10-(x-b-1);
                }
                if(d==y-1&&b>x-1){
                    Hulk[b][d]=aux+10-(b-x+1);
                } else if(d==y-1&&b<x-1){
                    Hulk[b][d]=aux+10-(x-b-1);
                }
                if(Hulk[b][d]<=aux){
                    Hulk[b][d]=aux+1;
                }
            }
        }

        printf("Parede %d:\n",a+1);

        for(b=0;b<e;b++){
            for(d=0;d<c-1;d++){
                printf("%d ",Hulk[b][d]);
            }

            printf("%d\n",Hulk[b][d]);
        }
    }

    for(i=0;i<MAX;i++){
    free(Hulk[i]);

    }

    free(Hulk);
}
