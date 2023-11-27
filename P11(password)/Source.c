#include <stdio.h>

int isPasswordWeak(char* password) {
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
			if (((password[i] - '0') == 9 ? 0 : password[i] - '0' + 1) != password[i + 1] - '0') {
				is_weak = 0;
				break;
			}
		}
	}

	return is_weak;
}

int main() {
	char password[5];

	scanf("%s", password);

	if (isPasswordWeak(password)) {
		printf("Weak\n");
	}
	else {
		printf("Strong\n");
	}

	return 0;
}