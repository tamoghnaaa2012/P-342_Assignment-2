//Tamoghna Pattanayak.Roll no:-1811168

/*
Find the average distance between two points on
    	(b) 6 by 6 two-dimensional grid (no diagonal connections):
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count=0;
	float sum = 0.0;
	float avg = 0.0;

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			for (int k = 0; k < 6; k++)
			{
				for (int l = 0; l < 6; l++)
				{
					sum += (abs(k - i) + abs(l - j));
					count++;

				}
			}

		}

	}
	printf("Sum of the  distance between two points is:\n%f\n", sum);
	avg = sum / count;

	printf("Total number of pairs:\n %d\n", count);
	printf("The average distance between two points is :\n %f units", avg);
}



/*
Sum of the  distance between two points is:
5040.000000
Total number of pairs:
 1296
The average distance between two points is :
 3.888889 units
*/
