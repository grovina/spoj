#include <stdio.h>

int main()
{
	int m, n;
	int val[102], min[50002];

	while (scanf(" %d", &m) > 0 && m != 0)
	{

		scanf(" %d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf(" %d", &val[i]);
		}

		for (int i = 1; i <= m; i++)
		{
			min[i] = 0;
		}

		for (int v = 0; v < n; v++)
		{
			min[val[v]] = 1;

			int p = val[0];
			int pp = p + val[v];
			while (pp <= m)
			{

				if (min[p] != 0 && (min[pp] == 0 || min[p] + 1 < min[pp]))
				{
					min[pp] = min[p] + 1;
				}

				p++;
				pp++;
			}
		}

		if (min[m] == 0)
		{
			printf("Impossivel\n");
		}
		else
		{
			printf("%d\n", min[m]);
		}
	}

	return 0;
}
