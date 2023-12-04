#include <stdio.h>
#include <string.h>

void swap(char* char_1, char* char_2) {
	char temp = *char_1;
	*char_1 = *char_2;
	*char_2 = temp;
}

void print_combination(char* str, int start, int len) {
	if (start == len) {
		printf("%s\n", str);
		return;
	}

	int char_occurrence[26] = { 0 };
	for (int i = start; i < len; i++) {
		if (!char_occurrence[str[i] - 'a']) {
			char_occurrence[str[i] - 'a'] = 1;
			if(i != start) swap(&str[start], &str[i]);
			print_combination(str, start + 1, len);
			if(i != start) swap(&str[start], &str[i]);
		}
	}
}

int main() {
	char S[11];

	scanf("%s", S);

	int len = strlen(S);

	print_combination(S, 0, len);

	return 0;
}