#include <stdio.h>
#include <string.h>

int isPalindrome(char* str, int len) {
	int palindrome = 1;

	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - 1 - i]) {
			palindrome = 0;
			break;
		}
	}

	return palindrome;
}

int main() {
	char string[10], sub_str[10] = { 0 };

	scanf("%s", string);

	int len = strlen(string);

	for (int i = 0; i < len - 2; i++) {
		for (int j = 3; j <= len - i; j++) {
			if (isPalindrome(string + i, j) && strlen(sub_str) < j) {
				strncpy(sub_str, string + i, j);
			}
		}
	}

	printf("%s", sub_str[0] == 0 ? "No Palindrome substring with length >= 3 found" : sub_str);

	return 0;
}