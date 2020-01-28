#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b,n,m,*vec,x,k;

    scanf("%d",&n);
    for(a=0;a<n;a++){
        vec = (int *)calloc(250,sizeof(int));

                scanf("%d",&m);
                for(b=0;b<m;b++){
                    scanf("%d",&x);
                    vec[x]++;
                }

            int *vec2 = (int *)calloc( 3000005,sizeof(int));
            int j = 0;
            for(b=0;b<231;b++){
                if(vec[b]>0)
                {
                    for(k=0;k<vec[b];k++){
                        vec2[j++] = b;
                    }
                }
            }
            int i;
            for(i = 0 ; i < j ; i++)
            {
                printf("%d",vec2[i]);
                if(i == j-1)
                    printf("\n");
                else
                    printf(" ");
            }
            free(vec);
            free(vec2);

    }

}
