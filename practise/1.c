#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[] = {1,2,3,4,5};

	int *p = a;
	printf("%p\n", p);

	int *q = &a[0];
	printf("%p\n", q);

	return 0;
}
