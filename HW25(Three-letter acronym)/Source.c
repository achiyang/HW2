#include <stdio.h>
#include <ctype.h> 

void make_acronym(char* s1, char* s2, char* s3) {
    char acronym[4];

    acronym[0] = toupper(s1[0]);
    acronym[1] = toupper(s2[0]);
    acronym[2] = toupper(s3[0]);
    acronym[3] = '\0';

    printf("%s", acronym);
}

int main() {
    char s1[20] = { 0 };
    char s2[20] = { 0 };
    char s3[20] = { 0 };

    scanf("%s %s %s", s1, s2, s3);
    make_acronym(s1, s2, s3);

    return 0;
}