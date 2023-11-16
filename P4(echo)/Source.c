  #include <stdio.h>

void print_echo(int len, char* str) {
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%c", str[i]);
		}
	}
}

int main() {
	int N;
	char S[51];

	scanf("%d %s", &N, S);

	print_echo(N, S);

	return 0;
}