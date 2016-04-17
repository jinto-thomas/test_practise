#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void insertionSort(int *a, int n)
{
	int i, temp, hole, value;
	for (i = 1; i < n-1; i++) {
		value = a[i];
		hole = i;
		while (hole > 0 && a[hole-1] > value	) {
			a[hole] = a[hole-1];
			hole--;
		}
		a[hole] = value;
	}
}

int main()
{
	int a[] = {2,4,1,9,6,3,7};
	insertionSort(a, 7);

	for (int i = 0; i < 7; i++) 
		printf("%d  ", a[i]);

	printf("\n");
	return 0;
}
