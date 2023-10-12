#include <stdio.h>

void check_password(char* password) {
    int is_good = 1;

    for (int i = 0; i < 3; i++) {
        if (password[i] == password[i + 1]) {
            is_good = 0;
        }
    }

    printf("%s", is_good ? "Good" : "Bad");
}

int main() {
    char S[5];
    scanf("%s", S);

    check_password(S);

    return 0;
}