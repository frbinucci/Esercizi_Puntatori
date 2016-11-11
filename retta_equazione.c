#include<stdio.h>
#include<math.h>

void calcolaRetta(double x1,double x2,double y1,double y2,double *m,double *q);

int main()
{
	double x1,x2,y1,y2,m,q;

	printf("Inserire le coordinate del punto A: ");
	scanf("%lf%lf",&x1,&y1);
	printf("Inserire le coordinate del punto B: ");
	scanf("%lf%lf",&x2,&y2);

	calcolaRetta(x1,x2,y1,y2,&m,&q);

	if(m==INFINITY)
	{
		printf("\nLa retta passante per A(%g,%g) e B(%g,%g) ha equazione: x=%g",x1,y1,x2,y2,x1);
	}
	else
	{
		printf("\nLa retta passante per A(%g,%g) e B(%g,%g) ha equazione: y=%gx+%g",x1,y1,x2,y2,m,q);
	}

	printf("\n\n");

}

void calcolaRetta(double x1,double x2,double y1,double y2,double *m,double *q)
{
	if((x1-x2)==0)
	{
		*m=INFINITY;
		*q=x1;
	}
	else
	{
		*m=(x1-x2)/(y1-y2);
		*q=y1-(x1*(*m));
	}

}