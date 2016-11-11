#include<stdio.h>
#include<math.h>

int calcolaRadici(double a,double b,double c,double *x1,double *x2);

int main()
{
	int soluzioniReali;
	double a,b,c,x1,x2;

	printf("Inserire coefficiente a: ");
	scanf("%lf",&a);
	printf("Inserire coefficiente b: ");
	scanf("%lf",&b);
	printf("Inserire coefficiente c: ");
	scanf("%lf",&c);

	printf("\n");
	if(calcolaRadici(a,b,c,&x1,&x2))
	{
		printf("Le soluzioni dell'equazione sono:\n");
		printf("x1=%g\n",x1);
		printf("x2=%g\n",x2);
	}
	else
	{
		printf("L'equazione non ha soluzioni reali!");
	}

	printf("\n\n");

}

int calcolaRadici(double a,double b,double c,double *x1,double *x2)
{
	int reali=0;
	double delta=(pow(b,2)-4*a*c);
	if(delta>=0)
	{
		reali=1;
		*x1=(-1*b+sqrt(delta))/2*a;
		*x2=(-1*b-sqrt(delta))/2*a;
	}
	return reali;
}