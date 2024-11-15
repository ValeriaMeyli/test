#include <stdio.h>
int main()
{ 
  float Cm, Pies, Pulgadas, Metros, Yardas;
  printf("Pies");
  scanf("%f", &Pies);
  Pulgadas=Pies*12;
  Cm=Pies*30.48;
  Metros=Pies/3.2808;
  Yardas=Pies/3;
	printf("El equvalente en Pies a Pulgadas es %.2f \n" , Pulgadas);
	printf("El equvalente en Pies a Cm es %.2f \n" , Cm);
	printf("El equvalente en Pies a Metros es %.2f \n" , Metros);
	printf("El equvalente en Pies a Yardas es %.2f \n" , Yardas);
	getch();
	return 0;
	
	
}