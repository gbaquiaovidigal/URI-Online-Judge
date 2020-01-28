#include<math.h>

main()
{
  double X1,X2,Y1,Y2,DISTANCIA;

  scanf("%lf %lf",&X1,&Y1);
  scanf("%lf %lf",&X2,&Y2);


  DISTANCIA=sqrt((pow(X2-X1,2))+(pow(Y2-Y1,2)));

  printf("%.4lf\n",DISTANCIA);
}
