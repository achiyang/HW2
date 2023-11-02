#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, M, K;
	int* temp = NULL;
	int** table;

	scanf("%d %d", &N, &M);

	table = (int**)malloc(sizeof(int*) * N);
	for (int i = 0; i < N; i++) {
		table[i] = (int*)calloc(N, sizeof(int));
	}

	for (int i = 0; i < M; i++) {
		scanf("%d", &K);
		if (temp == NULL) {
			temp = (int*)malloc(sizeof(int) * K);
		}
		else {
			temp = realloc(temp, sizeof(int) * K);
		}
		for (int j = 0; j < K; j++) {
			scanf("%d", &temp[j]);
			for (int k = 0; k < j; k++) {
				if (table[temp[j] - 1][temp[k] - 1] == 0) {
					table[temp[j] - 1][temp[k] - 1] = 1;
					table[temp[k] - 1][temp[j] - 1] = 1;
				}
			}
		}
	}

	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			if (table[i][j] == 0) {
				printf("%d, %d\n", i + 1, j + 1);
			}
		}
	}

	return 0;
}