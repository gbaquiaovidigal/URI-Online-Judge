#include<stdio.h>
#include<string.h>


void Ordenar(char ajust[1001][500],int t){

    int a,b;
    char aux[500];

    for(a=0;a<t;a++){
        for(b=t-1;b>a;b--){
            if(strcmp(ajust[b],ajust[b-1])<0){
                strcpy(aux,ajust[b]);
                strcpy(ajust[b],ajust[b-1]);
                strcpy(ajust[b-1],aux);
            }
        }
    }
}

main(){

    int a=0,b=0,maior=0,c;

    char Nome1[50],nomey[1001][500],nomen[1001][500],op[10],escolhido[500];

    while(scanf("%s",Nome1)&&strcmp("FIM",Nome1)!=0){
        scanf("%s",op);
        if(strcmp(op,"YES")==0){
            strcpy(nomey[a],Nome1);
            a++;
            if(strlen(Nome1)>maior){
                maior=strlen(Nome1);
                strcpy(escolhido,Nome1);
            }
        } else if(strcmp(op,"NO")==0){
            strcpy(nomen[b],Nome1);
            b++;
        }
    }
    Ordenar(nomey,a);
    Ordenar(nomen,b);
    for(c=0;c<a;c++){
        if(strcmp(nomey[c],nomey[c-1])!=0){
            printf("%s\n",nomey[c]);
        }
    }
    for(c=0;c<b;c++){
        if(strcmp(nomen[c],nomen[c-1])!=0){
            printf("%s\n",nomen[c]);
        }
    }
    printf("\nAmigo do Habay:\n%s\n",escolhido);
}
