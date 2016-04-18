#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[] = {35, 14, 5, 14, 34, 42, 63, 17, 25, 39, 61, 97, 55, 33, 96, 62, 32, 98, 77};

	int b[19];

	int B = 56;
	for (int i = 0; i < 19; i++) {
//		b[i] = a[i+B] % B;
		printf("%d ", (B+i)%19);
	}


	for (int j = 0 ; j < 19; j++)
//		printf("%d ", b[j]);

	return 0;
}
