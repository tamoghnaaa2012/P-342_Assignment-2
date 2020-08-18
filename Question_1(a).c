//Tamoghna Pattanayak,Roll No- 1811168
/*
 Find the average distance between two points on a
(a) straight line made of discrete N (=6) points:	o---o---o---o---o---o

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

            sum = sum + (abs(i - j));
            count++;
        }


		}


	printf("Sum of the  distance between two points is:\n%f\n", sum);
	avg = sum / count;

	printf("Total number of pairs:\n %d\n", count);
	printf("The average distance between two points is :\n %f units", avg);
}






/*

Sum of the  distance between two points is:
70.000000
Total number of pairs:
 36
The average distance between two points is :
 1.944444 units

*/
