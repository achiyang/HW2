#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareStrings(const void* a, const void* b) {
	return strcmp(*(const char**)a, *(const char**)b);
}

int main() {
	int N, L;

	scanf("%d %d", &N, &L);

	char** strings = (char**)malloc(sizeof(char*) * N);
	for (int i = 0; i < N; i++) {
		strings[i] = (char*)malloc(sizeof(char) * (L + 1));
		scanf("%s", strings[i]);
	}

	qsort(strings, N, sizeof(char*), compareStrings);

	for (int i = 0; i < N; i++) {
		printf("%s", strings[i]);
		free(strings[i]);
	}
	free(strings);

	return 0;
}