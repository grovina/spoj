#include <stdio.h>

int main()
{
	int n, v, votos[102];

	while (scanf(" %d", &n) > 0 && n != 0)
	{
		for (int i = 0; i < n; i++)
			votos[i] = 0;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				scanf(" %d", &v);
				if (v)
					votos[j]++;
			}
		}

		int max = 0;
		for (int i = 0; i < n; i++)
			if (votos[i] > max)
				max = votos[i];
		printf("%d\n", max);
	}

	return 0;
}
