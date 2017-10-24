#include <stdio.h>

int main()
{
	int N, k = 1;

	while (scanf(" %d", &N) > 0 && N != 0)
	{
		int Xi, Yi, Ui, Vi;
		scanf(" %d %d %d %d", &Xi, &Yi, &Ui, &Vi);

		for (int i = 1; i < N; i++)
		{
			int X, Y, U, V;
			scanf(" %d %d %d %d", &X, &Y, &U, &V);
			if (X > Xi)
				Xi = X;
			if (Y < Yi)
				Yi = Y;
			if (U < Ui)
				Ui = U;
			if (V > Vi)
				Vi = V;
		}
		if (Xi < Ui && Yi > Vi)
			printf("Teste %d\n%d %d %d %d\n\n", k++, Xi, Yi, Ui, Vi);
		else
			printf("Teste %d\nnenhum\n\n", k++);
	}

	return 0;
}
