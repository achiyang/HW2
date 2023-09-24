#include <stdio.h>
#include <string.h>

void print_remove_aeiou(char* str) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (!strchr("aeiou", str[i])) {
			printf("%c", str[i]);
		}
	}
	return;
}

int main() {
	char S[100];

	scanf("%s", S);

	print_remove_aeiou(S);

	return 0;
}