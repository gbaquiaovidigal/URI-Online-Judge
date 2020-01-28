#include<stdio.h>

lajotas(int num,int a,int b){

    if(num==0){
        return(0);
    } else if(num>1){
        return b+lajotas(num-1,b,a+b);
    } else {
        return(1);
    }

}



main(){

    int x,y=0,z=1;

    while(scanf("%d",&x) && x!=0){
        printf("%d\n",lajotas(x,y,z));
    }
}
