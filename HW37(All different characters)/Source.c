#include <stdio.h>

int main() {
	int alphabet[26] = { 0 };

	char temp;
	while ((temp = getchar()) != EOF && temp != '\n') {
		if (alphabet[temp - 'a'] != 0) {
			printf("NO");
			return 0;
		}
		alphabet[temp - 'a'] = 1;
	}

	printf("YES");

	return 0;
}