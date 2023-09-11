#include <stdio.h>

char find_alphabet(char* string) {
	char alphabet[26] = { 0 };
	for (int i = 0; string[i] != '\0'; i++) {
		alphabet[string[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		if (alphabet[i] == 1) {
			return 'a' + i;
		}
	}
	return -1;
}

int main() {
	char S[4];
	char result;

	scanf("%s", S);

	result = find_alphabet(S);

	if (result == -1) {
		printf("-1\n");
	}
	else {
		printf("%c\n", result);
	}

	return 0;
}