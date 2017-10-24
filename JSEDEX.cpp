#include <stdio.h>

int main()
{
	int diam;
	scanf(" %d", &diam);

	int dif = 0;
	for (int i = 0; i < 3; i++)
	{
		int x;
		scanf(" %d", &x);
		if (diam > x)
		{
			printf("N");
			return 0;
		}
	}

	printf("S");
	return 0;
}
