#include<stdio.h>


int contaPositivi(int *vet,int size);

int main()
{
	int dim;
	printf("Inserire al dimensione dell'array: ");
	scanf("%d",&dim);
	printf("\n");

	int vet[dim];
	int positivi;

	for(int i=0;i<dim;i++)
	{
		printf("Inserire l'elemento n.%d: ",i+1);
		scanf("%d",&vet[i]);
	}

	positivi=contaPositivi(vet,dim);

	printf("\nElementi positivi nell'array: %d",positivi);

	printf("\n\n");




}

int contaPositivi(int *vet,int size)
{
	int count=0;

	for(int i=0;i<size;i++)
	{
		if(*(vet+i)>0)
		{
			count++;
		}
	}

	return count;
}