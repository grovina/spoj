#include <stdio.h>

int main()
{
	int N, res[13] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600};

	scanf("%d", &N);
	printf("%d", res[N]);

	return 0;
}