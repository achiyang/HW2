#include <stdio.h>
#include <stdlib.h>

int main() {
	int H, W;
	int** arr;

	scanf("%d %d ", &H, &W);

	arr = (int**)malloc(H * sizeof(int*));
	for (int i = 0; i < H; i++) {
		arr[i] = (int*)malloc(W * sizeof(int));
		for (int j = 0; j < W; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < W; i++) {
		for (int j = 0; j < H; j++) {
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}

	for (int i = 0; i < H; i++) {
		free(arr[i]);
	}
	free(arr);

	return 0;
}