#include <stdio.h>

int main( ){
	int TAM, i;
	TAM = 9;
	int menor; 
	double media;
	double soma=0;
	int impares = 0;
	scanf("%d", &TAM);
	float vetor[TAM];

	for(i = 0; i < TAM; i++)
	{
		scanf("%f", &vetor[i]);
		soma = soma + vetor[i];

		if(i %2 != 0)
		{
			impares++;
		}
	}

	menor = vetor[0];
	for(i = 0; i < TAM; i++)
	{
		if(vetor[i] < menor)
		{
			menor = vetor[i];
		}
	}

	media = soma/TAM;

	printf("\nSoma: %f, MEDIA: %f\n, IMPARES: %d\n, MENOR: %d\n", soma, media, impares, menor);
	return 0;
}
