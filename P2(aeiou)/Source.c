#include <stdio.h>
#include <string.h>

void print_consonants(char* str) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (!strchr("aeiou", str[i])) {
			printf("%c", str[i]);
		}
	}
}

int main() {
	char S[100];

	scanf("%s", S);

	print_consonants(S);

	return 0;
}