#include <stdio.h>

int main() {
	int N, a_count = 0, b_count = 0;

	scanf("%d", &N);

	while (N % 2 == 0) {
		N /= 2;
		a_count++;
	}
	while (N % 3 == 0) {
		N /= 3;
		b_count++;
	}

	if (N == 1) {
		printf("a: %d, B: %d\n", a_count, b_count);
	}
	else {
		printf("NO\n");
	}

	return 0;
}