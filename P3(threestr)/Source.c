#include <stdio.h>
#include <string.h>

int check(char* str) {
	char* threestr[7] = { "ACE","BDF","CEG","DFA","EGB","FAC","GBD" };

	for (int i = 0; i < 7; i++) {
		if (strcmp(str, threestr[i]) == 0) {
			return 1;
		}
	}
	return 0;
}

int main() {
	char S[4];

	scanf("%s", S);

	printf("%s", check(S) ? "Yes" : "No");

	return 0;
}