#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is(char** list, char* str, int size, int index) {
	for (int i = 0; i < size; i++) {
		if (i == index) {
			continue;
		}
		for (int j = 0; j < 2; j++) {
			if (strstr(list[i * 2 + j], str) != NULL) {
				return 1;
			}
		}
	}

	return 0;
}

int main() {
	int N;
	char** list;

	scanf("%d", &N);

	list = (char**)malloc(sizeof(char*) * N * 2);
	for (int i = 0; i < N * 2; i++) {
		list[i] = (char*)malloc(sizeof(char) * 11);
		scanf(" %s", list[i]);
	}

	for (int i = 0; i < N; i++) {
		if (is(list, list[i * 2], N, i) != NULL && is(list, list[i * 2 + 1], N, i) != NULL) {
			printf("NO");
			return 0;
		}
	}

	printf("YES");

	return 0;
}