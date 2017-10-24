#include <stdio.h>

int main()
{
	int n, p, i = 0;

	while (scanf("%d", &n) > 0 && n != -1)
	{
		p = (1 << n) + 1;
		p *= p;
		printf("Teste %u\n%d\n\n", ++i, p);
	}

	return 0;
}
