#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d", &n) > 0 && n != 0)
	{
		printf("f91(%d) = %d\n", n, n < 102 ? 91 : n - 10);
	}
	return 0;
}
