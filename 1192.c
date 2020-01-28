#include<stdio.h>

main(){

   int T,i,Total,x,y;

   scanf("%d",&T);

   char V[T][3];

   for(i=0;i<T;i++){
        scanf("%s",V[i]);

        Total=0;



        if(V[i][0]==V[i][2]){
            x=V[i][0]-'0';
            y=V[i][2]-'0';
            Total=x*y;
        }

        else{

        if((V[i][1]>='A')&&(V[i][1]<='Z')){
           x=V[i][0]-'0';
           y=V[i][2]-'0';
           Total=y-x;
        }

        else if((V[i][1]>='a')&&(V[i][1]<='z')){
            x=V[i][0]-'0';
            y=V[i][2]-'0';
            Total=x+y;
        }
        }

    printf("%d\n",Total);
   }


}
