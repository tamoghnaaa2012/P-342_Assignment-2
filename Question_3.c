//Tamoghna Pattanayak.Roll No:-1811168
/*Create 3x3 matrices M=(a11,a12 … a33) and N=(b11,b12, …, b33) with numbers of your
       choice (zeros, negatives and positives but not random numbers) in two separate files. Read
       the matrices from the files. Find M x A and M x N
*/


#include <stdio.h>
#include <stdlib.h>
int main()
{
	int M[3][3];
	int N[3][3];
	FILE *x;
	FILE *y;

	x = fopen("Mat11.txt","r");
	if (x == NULL)
		exit(0);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			fscanf(x, "%d ", &M[i][j]);
		}
	}
	printf("Matrix M is :\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}



	y = fopen("Mat22.txt", "r");
	if (y == NULL)
		exit(0);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			fscanf(y, "%d ", &N[i][j]);
		}
	}
	printf("\nMatrix N is :\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", N[i][j]);
		}
		printf("\n");
	}



	int A[] = { 2,2,-2 };
	int MA[3] = { 0,0,0 };
	int MN[3][3];

	printf("\nThe product MxA is given by :\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MA[i] += (A[j] * M[i][j]);
		}
		printf("%d\n", MA[i]);
	}

	printf("\nThe matrix multiplication  of M and N is:\n ");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MN[i][j] = 0;
			for (int k = 0; k < 3; k++)
				MN[i][j] = MN[i][j] + M[i][k] * N[k][j];
			printf("%d ", MN[i][j]);
		}
		printf("\n");
	}
}




/*

Matrix M is :
1 2 3
4 5 6
7 8 9

Matrix N is :
1 2 3
4 5 6
7 8 9

The product MxA is given by :
0
6
12

The matrix multiplication  of M and N is:
 30 36 42
66 81 96
102 126 150


*/
