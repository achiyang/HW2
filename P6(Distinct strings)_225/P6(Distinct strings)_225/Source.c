#include <stdio.h>
#include <string.h>

void swap(char* char_1, char* char_2) {
	if (*char_1 != *char_2) {
		char temp = *char_1;
		*char_1 = *char_2;
		*char_2 = temp;
	}
}

void print_combination(char* str, int start, int len) {
	if (start == len) {
		printf("%s\n", str);
		return;
	}

	for (int i = start; i <= len; i++) {
		int is_duplicate = 0;
		for (int j = start; j < i; j++) {
			if (str[j] == str[i]) {
				is_duplicate = 1;
				break;
			}
		}
		if (!is_duplicate) {
			swap(&str[start], &str[i]);
			print_combination(str, start + 1, len);
			swap(&str[start], &str[i]);
		}
	}
}

int main() {
	char S[11];

	scanf("%s", S);

	int len = strlen(S);

	print_combination(S, 0, len - 1);

	return 0;
}