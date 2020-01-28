#include<stdio.h>

int testes(int y){

    int a,vec[5];

    for(a=0;a<4;a++){
        vec[a]=y%10;
        y=y/10;
    }
    if(vec[0]!=vec[1]||vec[1]!=vec[2]||vec[2]!=vec[3]){
        return 0;
    } else {
        return 1;
    }

}

int maior(int x){

    int a,b,vec[5],aux;

    for(a=0;a<4;a++){
        vec[a]=x%10;
        x=x/10;
    }
    for(a=0;a<4;a++){
        for(b=0;b<4;b++){
            if(vec[a]>vec[b]){
                aux=vec[a];
                vec[a]=vec[b];
                vec[b]=aux;
            }
        }
    }
    aux=0;
    for(a=0;a<4;a++){
        aux=vec[a]+aux;
        aux=aux*10;
    }
    aux/=10;
    return aux;

}

int menor(int x){

    int a,b,vec[5],aux;

    for(a=0;a<4;a++){
        vec[a]=x%10;
        x=x/10;
    }
    for(a=0;a<4;a++){
        for(b=0;b<4;b++){
            if(vec[a]<vec[b]){
                aux=vec[a];
                vec[a]=vec[b];
                vec[b]=aux;
            }
        }
    }
    aux=0;
    for(a=0;a<4;a++){
        aux=vec[a]+aux;
        aux=aux*10;
    }
    aux/=10;
    return aux;

}

int kaprekar(int k){

    int cont=0,ma,me;

    if(testes(k)==0){
        while(k!=6174){
            ma=maior(k);
            me=menor(k);
            k=ma-me;
            cont++;
        }
        return cont;
    } else {
        return -1;
    }

}

main(){

    int resp,a,n,m;

    scanf("%d",&n);
    for(a=0;a<n;a++){
        scanf("%d",&m);
        resp=kaprekar(m);
        printf("Caso #%d: %d\n",a+1,resp);
    }
}
