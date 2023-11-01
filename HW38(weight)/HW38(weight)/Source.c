#include <stdio.h>
#include <stdlib.h>

struct Set {
	int* data;
	int size;
};

void insertSet(struct Set* set, int data) {
	if (set->size == 0) {
		set->data = (int*)malloc(sizeof(int));
		set->data[set->size++] = data;
	}
	else {
		for (int i = 0; i < set->size; i++) {
			if (set->data[i] == data) {
				return;
			}
		}
		set->data = (int*)realloc(set->data, sizeof(int) * (set->size + 1));
		set->data[set->size++] = data;
	}
}

void get_n(struct Set* set, int arr[], int index, int depth, int sum, int N, int W) {
	if (depth != 0 && sum <= W) {
		insertSet(set, sum);
	}

	if (depth == 3) {
		return;
	}

	for (int i = index; i < N; i++) {
		get_n(set, arr, i + 1, depth + 1, sum + arr[i], N, W);
	}
}

int main() {
	int N, W;

	scanf("%d %d", &N, &W);

	int* A = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {
		scanf(" %d", &A[i]);
	}

	struct Set set = { NULL, 0 };

	get_n(&set, A, 0, 0, 0, N, W);

	printf("%d", set.size);

	free(set.data);

	return 0;
}