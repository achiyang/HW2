#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, count = 1;
	int* sequence;

	scanf("%d", &N);

	sequence = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &sequence[i]);
	}

	while (1) {
		int is = 0;
		for (int i = 0; i < N; i++) {
			if (count == sequence[i]) {
				is = 1;
			}
		}
		if (is == 0) {
			break;
		}
		count++;
	}

	printf("%d", count);

	return 0;
}