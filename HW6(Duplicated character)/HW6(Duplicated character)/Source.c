#include <stdio.h>
#include <string.h>

void duplicating(char* S) {
	for (int i = 0; S[i] != '\0'; i++) {
		printf("%c", S[i]);
		if (strchr("aeiou", S[i])) {
			printf("%c", S[i]);
		}
	}
}

int main() {
	char S[100];

	scanf("%s", S);
	duplicating(S);

	return 0;
}