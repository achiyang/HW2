#include <stdio.h>
#include <stdbool.h>

int main() {
	char arr[9];

	for (int i = 0; i < 9; i++) {
		scanf(" %c", &arr[i]);
	}

	bool isRotating = true;

	for (int i = 0; i < 4; i++) {
		if (arr[i] != arr[8 - i]) {
			isRotating = false;
			break;
		}
	}

	printf("%s\n", isRotating ? "YES" : "NO");

	return 0;
}