#include<stdio.h>
#include<stdlib.h>

#define LINHA	3
#define COLUNA  3

int main()
{
	int mat[LINHA][COLUNA] = { 0 };

	for (int i = 0; i < LINHA; i++)
	{
		for (int j = 0; j < COLUNA; j++)
		{
			printf_s("Digite o valor da posicao %d,%d do vetor:\n", i, j);
			scanf_s("%d", &mat[i][j]);
		}
	}

	printf("Matriz Digitada:\n");
	
	for (int i = 0; i < LINHA; i++)
	{ 
		for (int j = 0; j < COLUNA; j++)
		{
			printf("%d | \a", mat[i][j]);
		}
		printf("\n");
			
	}
	printf_s("Diagonal Principal:\n");
	{
		for (int i = 0; i < LINHA; i++)
		{
			for (int j = 0; j < COLUNA; j++)
			{
				if (i == j) //Diagonal Principal
				{
					printf("%d | \a", mat[i][j]);

				}

			}

		}







	}



}