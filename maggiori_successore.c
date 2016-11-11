#include<stdio.h>

int maggioriSuccessore(int *vet,int size);

int main()
{

	int dim;
	printf("Inserire al dimensione dell'array: ");
	scanf("%d",&dim);
	printf("\n");

	int vet[dim];
	int maggiori;

	for(int i=0;i<dim;i++)
	{
		printf("Inserire l'elemento n.%d: ",i+1);
		scanf("%d",&vet[i]);
	}

	maggiori=maggioriSuccessore(vet,dim);

	printf("\nElementi dell'array maggiori del loro successore: %d",maggiori);

	printf("\n\n");

}

int maggioriSuccessore(int *vet,int size)
{
	int count=0;

	for(int i=0;i<size-1 ;i++)
	{
		if(*(vet+i)>*(vet+i+1))
		{
			count++;
		}
	}
	return count;
}