/* 덧셈식 출력하기
#include <stdio.h>


int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d", a, b, a + b);
    return 0;
}
*/

/* 문자열 붙여서 출력하기
#include <stdio.h>

#define MAX_LENGTH 21

int main(void) {
    char str1[11];
    char str2[11];

    scanf("%s %[^\n]s", str1, str2);

    char result[MAX_LENGTH];
    int i, j;

    for (i = 0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; j++) {
        result[i + j] = str2[j];
    }

    result[i + j] = '\0';

    printf("%s\n", result);

    return 0;
}
*/

/* 문자열 돌리기
#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
char s1[LEN_INPUT];
scanf("%s", s1);

for (int i = 0; s1[i] != '\0'; i++) {
    printf("%c\n", s1[i]);
}

return 0;
}
*/

/* 홀짝 구분하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is even", a);
    }
    else printf("%d is odd", a);

    return 0;
}
*/

#include <stdio.h>
#include <string.h>

char* solution(char* my_string, char* overwrite_string, int s) {
    int overwrite_length = strlen(overwrite_string);
    int my_string_length = strlen(my_string);

    strncpy(my_string + s, overwrite_string, overwrite_length);

    if (overwrite_length > my_string_length - s) {
        my_string[s + overwrite_length] = '\0';
    }

    return my_string;
}

int main(void) {
    char my_string[1001];
    char overwrite_string[1001];
    int s;

    scanf("%s", my_string);
    scanf("%s", overwrite_string);
    scanf("%d", &s);

    printf("%s\n", solution(my_string, overwrite_string, s));

    return 0;
}
