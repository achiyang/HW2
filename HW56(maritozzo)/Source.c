#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void concatStrings(char** destination, const char* source) {
	int destination_len = *destination == NULL ? 0 : strlen(*destination);
	int source_len = strlen(source);

	if (*destination == NULL) {
		*destination = (char*)malloc(sizeof(char) * (source_len + 1));
	}
	else {
		*destination = (char*)realloc(*destination, sizeof(char) * (destination_len + source_len + 1));
	}

	for (int i = 0; source[i] != '\0'; i++) {
		(*destination)[destination_len + i] = source[i];
	}
	(*destination)[destination_len + source_len] = '\0';
}

int main() {
	char* S_ = NULL;
	char S[3][11], T[1001];

	for (int i = 0; i < 3; i++) {
		scanf("%s", S[i]);
	}
	scanf("%s", T);

	for (int i = 0; T[i] != '\0'; i++) {
		int index = T[i] - '1';
		concatStrings(&S_, S[index]);
	}

	printf("%s", S_);

	return 0;
}