#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_pair(char** S, char* T, int N) {
	int count = 0;
	char combine_string[201];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) continue;

			int is = 1;

			strcpy(combine_string, S[i]);
			strcat(combine_string, S[j]);

			char* cp = combine_string;
			for (int k = 0; T[k] != '\0'; k++) {
				if (strchr(cp, T[k]) == NULL) {
					is = 0;
					break;
				}
				cp = strchr(cp, T[k]) + 1;
			}
			if (is) {
				printf("(%d, %d)\n", i + 1, j + 1);
				count++;
			}
		}
	}

	if (count != 0) {
		printf("Total: %d", count);
	}
	else {
		printf("NO");
	}
}

int main() {
	int N;
	char T[101], temp[101];

	scanf("%d", &N);
	scanf(" %s", T);

	char** S = (char**)malloc(sizeof(char*) * N);
	for (int i = 0; i < N; i++) {
		scanf(" %s", temp);
		int len = strlen(temp);
		S[i] = (char*)malloc(sizeof(char) * (len + 1));
		strcpy(S[i], temp);
	}

	print_pair(S, T, N);

	for (int i = 0; i < N; i++) {
		free(S[i]);
	}
	free(S);

	return 0;
}