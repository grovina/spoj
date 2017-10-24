#include <stdio.h>

int main() {

	int n,x,t=0;

	scanf(" %d",&n);

	while (n--) {
		scanf(" %d",&x);
		t+=x;
	}

	printf("%d",t);

	return 0;
}
