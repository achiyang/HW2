#include <stdio.h>
#include <string.h>

char get_mid_char(char* str) {
	return str[(strlen(str) + 1) / 2 - 1];
}

int main() {
	char string[100];

	scanf("%s", string);

	printf("%c\n", get_mid_char(string));

	return 0;
}