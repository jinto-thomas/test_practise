#include <stdio.h>
#include <stdlib.h>

int* performOps(int *A, int len, int *blen) {
	int i;
	*blen = len * 2;
	int *B = (int *)malloc((*blen) * sizeof(int));
	for (i = 0; i < len; i++) {
		B[i] = A[i];
		printf("%d|",(len-i)%len);
		B[i + len] = A[(len - i) % len];
	}
	return B;
}

int main()
{
	int b;
	int a[] = {5,10,2,1};
	int l = 4;
	int *B = performOps(a, l, &b);

	int i;
	printf("\n");
	for (i = 0; i < b; i++)
		printf("%d ",B[i]);
}
