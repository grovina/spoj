#include <stdio.h>

int main()
{
	int X1, Y1, X2, Y2;
	int N, X, Y;
	int k = 1;

	while (scanf(" %d %d %d %d", &X1, &Y1, &X2, &Y2) > 0 && (X1 != 0 && Y1 != 0 && X2 != 0 && Y2 != 0))
	{
		scanf(" %d", &N);
		int M = 0;
		for (int i = 0; i < N; i++)
		{
			scanf(" %d %d", &X, &Y);
			if (X >= X1 && X <= X2 && Y <= Y1 && Y >= Y2)
				M++;
		}
		printf("Teste %d\n%d\n\n", k++, M);
	}

	return 0;
}
