#include <stdio.h>

int main() {
	char str[10];

	scanf("%s", str);

	for (int i = 0; str[i] != '\0'; i++) {
		switch (str[i]) {
		case '0':
			printf("0");
			continue;
		case '1':
			printf("1");
			continue;
		case 'B':
			printf("\b \b");
			continue;
		}
	}

	return 0;
}