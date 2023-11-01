#include <stdio.h>

int main() {
	int A, B, K, count = 0;

	scanf("%d %d %d", &A, &B, &K);

	while (1) {
		if (A >= B) {
			break;
		}
		A *= K;
		count++;
	}

	printf("%d", count);

	return 0;
}