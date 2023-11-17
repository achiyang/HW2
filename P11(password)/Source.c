#include <stdio.h>

int main() {
	char password[5];

	scanf("%s", password);

	int is_weak = 1;
	for (int i = 0; i < 3; i++) {
		if (password[i] != password[i + 1]) {
			is_weak = 0;
			break;
		}
	}

	if (!is_weak) {
		is_weak = 1;
		for (int i = 0; i < 3; i++) {
			if ((password[i] - '0' + 1) % 10 != password[i + 1] - '0') {
				is_weak = 0;
				break;
			}
		}
	}

	if (is_weak) {
		printf("Weak\n");
	}
	else {
		printf("Strong");
	}

	return 0;
}