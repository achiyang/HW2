#include <stdio.h>
#include <string.h>

int main() {
	int alphabet[26] = { 0 };

	char temp;
	while ((temp = getchar()) != EOF && temp != '\n') {
		alphabet[temp - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] % 2 != 0) {
			printf("NO");
			return 0;
		}
	}

	printf("YES");

	return 0;
}