#include <stdio.h>
#include <string>

using namespace std;

void incrementa(string &a, string b)
{
	while (a.length() >= b.length())
	{
		a = "0" + a;
	}
	int x, y, sobra = 0;
	for (int i = a.length(); i >= 0, i--)
	{
		a[i] >> x;
		b[i] >> y;
		a[i] = (int)a[i]
	}
}

int main()
{
	int k = 0, N, F;
	string total, item;

	while (scanf("%d %d", &N, &F), (N != 0 && F != 0))
	{
		for (int i = 0; i < N; i++)
		{
			scanf("%s", item);
			soma(total, item);
		}
		printf("Bill #%d costs %d: each friend should pay %d\n\n", ++k, total, total / F);
	}

	return 0;
}
