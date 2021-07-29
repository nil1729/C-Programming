#include<stdio.h>
#include<stdlib.h>

	int my_array[] = { 10, 5, 25, 15, 20, 30 };

	int comparetor (const void * a, const void * b)
	{
		return ( *(int*)a - *(int*)b );
	}

	int main ()
	{
		int i;
		qsort (my_array, 6, sizeof(int), comparetor );

		for (i=0; i<6; i++)
			printf ("%d ",my_array[i]);
		return 0;
	}
