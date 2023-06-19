#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) 
{
	int numero,i,n,j,aux;
	int array[10000];//Hola
	
	printf("Ingrese el numero de numeros a ordenar: ");
	scanf("%d", &n);
	
	
	srand(time(NULL));
	
	for(i=1; i<=n; i++){
		array[i] = 1 + rand();
		printf("\n%i", array[i]);
		
	}
	
	for (i=0; i<n; i++){
		for(j=0;j<n;j++)
		{
			if(array[j]>array[j+1]){
				aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
			}
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d", array[i]);
	}
	
	
	
	return 0;
}
