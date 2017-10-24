#include <stdio.h>

int main()
{
	int N, res[13] = {1, 2, 3, 24, 120, 720, 5040, 40320, 362880};

	scanf("%d", &N);
	printf("%d", res[N]);

	return 0;
}