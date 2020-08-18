//Tamoghna Pattanayak.Roll No:-1811168
/*
Create two vectors of type A=(a1,a2,a3) and B=(b1,b2,b3) with numbers of your choice (but
       not random numbers) in the code itself. Find A+B and A.B (dot product)

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vector_A[3] = { 2,2,-2 };
	int vector_B[3] = { 2,9,6 };
	int sum[3], dot_product=0;

	for (int i = 0; i < 3; i++)
	{
		dot_product = dot_product + (vector_A[i] * vector_B[i]);
	}

	for (int i=0;i<3;i++)
    {
        sum[i] = vector_A[i] + vector_B[i];
    }

	printf("Vector A : [");
	for (int i = 0; i < 3; i++)
		printf("  %d  ", vector_A[i]);
	printf("]");


	printf("   Vector B : [");
	for (int i = 0; i < 3; i++)
		printf("  %d  ", vector_B[i]);
	printf("]");


	printf("\nThe sum of the vectors is : [");
	for (int i = 0; i < 3; i++)
		printf("  %d  ", sum[i]);
	printf("]");


	printf("\nThe dot product is : %d\n", dot_product);

}






/*


Vector A : [  2    2    -2  ]   Vector B : [  2    9    6  ]
The sum of the vectors is : [  4    11    4  ]
The dot product is : 10

*/
