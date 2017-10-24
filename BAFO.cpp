#include <stdio.h>

int main()
{
	int R, k = 1;

	while (scanf(" %d", &R) > 0 && R != 0)
	{
		int dif = 0;
		for (int i = 0; i < R; i++)
		{
			int a, b;
			scanf(" %d %d", &a, &b);
			dif += a - b;
		}

		if (dif > 0)
			printf("Teste %d\nAldo\n\n", k++);
		else
			printf("Teste %d\nBeto\n\n", k++);
	}

	return 0;
}
