#include <stdio.h>

int main() {
	int N, A, B;

	scanf("%d %d %d", &N, &A, &B);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < A; j++) {
			for (int k = 0; k < N; k++) {
				for (int l = 0; l < B; l++) {
					printf("%c", (i + k) % 2 ? 'B' : 'W');
				}
			}
			printf("\n");
		}
	}

	return 0;
}