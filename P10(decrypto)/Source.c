#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, M, * P;
	char* S;

	scanf("%d", &N);
	S = (char*)malloc(sizeof(char) * (N + 1));

	scanf(" %s", S);

	scanf(" %d", &M);
	P = (int*)malloc(sizeof(int) * M);
	for (int i = 0; i < M; i++) {
		scanf(" %d", &P[i]);
	}

	for (int i = 0; S[i] != '\0'; i++) {
		S[i] += P[i % M];
	}

	printf("%s\n", S);

	free(S);
	free(P);

	return 0;
}