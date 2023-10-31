#include <stdio.h>

int main() {
	char string[4] = { 0 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			char temp;
			scanf(" %c", &temp);
			if (i == j) {
				string[i] = temp;
			}
		}
	}

	printf("%s", string);

	return 0;
}