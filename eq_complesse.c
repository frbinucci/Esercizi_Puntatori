#include<stdio.h>
#include<math.h>

void calcolaRadici(double a,double b,double c,double *rex1,double *imx1,double *rex2,double *imx2);

int main()
{

	double a,b,c,rex1,rex2,imx1,imx2;

	printf("Inserire coefficiente a: ");
	scanf("%lf",&a);
	printf("Inserire coefficiente b: ");
	scanf("%lf",&b);
	printf("Inserire coefficiente c: ");
	scanf("%lf",&c);

	calcolaRadici(a,b,c,&rex1,&imx1,&rex2,&imx2);

	printf("\nLe soluzioni dell'equazione sono: ");
	printf("\nx1=%g + i%g",rex1,imx1);
	printf("\nx2=%g - i%g",rex2,imx2);

	printf("\n\n");
}

void calcolaRadici(double a,double b,double c,double *rex1,double *imx1,double *rex2,double *imx2)
{
	double delta;
	delta = (pow(b,2)-4*a*c);
	if(delta>=0)
	{
		*rex1=((-1*b)+sqrt(delta))/2*a;
		*rex2=((-1*b)-sqrt(delta))/2*a;
		*imx1=0;
		*imx2=0;
	}
	else
	{
		*rex1=((-1*b)/2*a);
		*rex2=((-1*b)/2*a);
		*imx1=sqrt(-1*delta);
		*imx2=-1*sqrt(-1*delta);
	}

}
