#include <stdio.h>
#include <stdlib.h>

/**
 * @input A : Read only ( DON'T MODIFY ) 2D integer array ' * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Integer array. You need to malloc memory for result array, 
 * and fill result's length in length_of_array
 */
int* spiralOrder(const int** A, int n11, int n12, int *length_of_array) {
	*length_of_array = n11 * n12; // length of result array
	int *result = (int *) malloc(*length_of_array * sizeof(int));

	int i, k, l, m, n;
	m = n11;
	n = n12;
	k = l = 0;
	int x = 0;
	while (k < m && l < n && x < (*length_of_array)) {
		for (i = 1; i < n; ++i)
		{
			result[x] = A[k][i];
			++x;
		}
		k++;

		for (i = k; i< m; ++i)
		{
			result[x] = A[i][n-1];
			++x;
		}
		n--;

		if (k < m)
		{
			for (i < n-1; i >=l ; --i)
			{
				result[x] = A[m-1][i];
				++x;
			}
			m--;
		}

		if (l < n)
		{
			for (i = m-1;i >= k;--i)
			{
				result[x] = A[i][l];
				++x;
			}
			l++;
		}

	}

	// DO STUFF HERE
	return result;
}


int main()
{
	int a[1][1] = {1};
	int d;
	int *p = spiralOrder(&a, 1,1,&d);

	printf("%d\n", d);
	return 0;
}
