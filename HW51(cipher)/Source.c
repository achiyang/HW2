#include <stdio.h>

int main() {
	int N;
	char str[11];

	scanf("%d", &N);
	scanf("%s", str);

	for (int i = 0; str[i] != '\0'; i++) {
		printf("%c", (str[i] - 'a' + N) % 26 + 'a');
	}

	return 0;
}