#include <stdio.h>
#include <stdlib.h>
int max(int a, int b)
{
	int i = (a>b)?a:b;
	return i;
}

int maxSum(int *a, int l)
{
	int sum, ans, i;
	sum = ans = 0;
	for (i = 0 ; i < l ;i ++) {
		if (a[i] + sum > 0)
			sum += a[i];
		else
			sum = 0;
		ans = max(sum, ans);
	}

	return ans;
}
// kadane's algo!
int main()
{
	int a[] = {-2,1,-3,4,-1,2,1,-5,4};
	int i = maxSum(a, 9);
	printf("%d\n", i);
	return 0;
}
