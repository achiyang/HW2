#include <stdio.h>

int S, T;
int triple[3];

void print_triples(int depth, int sum, int mul) {
	if (depth == 3) {
		if (mul > T) {
			return;
		}
		printf("(%d, %d, %d)\n", triple[0], triple[1], triple[2]);
		return;
	}

	for (int i = 0;; i++) {
		if (sum + i > S) {
			return;
		}
		triple[depth] = i;
		print_triples(depth + 1, sum + i, mul * i);
	}
}

int main() {
	scanf("%d %d", &S, &T);

	print_triples(0, 0, 1);

	return 0;
}