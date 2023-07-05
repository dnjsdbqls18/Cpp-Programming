/* 문자열 출력하기
#include <stdio.h>
#define LEN_INPUT 1000001

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", &s1);
    printf("%s", s1);

    return 0;
}
*/

/* a와 b 출력하기
#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    printf("a = %d\n", a);
    printf("b = %d", b);
    return 0;
}
*/

/* 문자열 반복해서 출력하기
#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a;
    scanf("%s %d", s1, &a);
    for (int i = 0; i < a; i++)
    {
        printf("%s", s1);
    }
    return 0;
}
*/


/* 대소문자 바꿔서 출력하기
#include <stdio.h>
#define LEN_INPUT 20

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", &s1);
    for (int i = 0; i < 20; i++) {
        if ((s1[i] >= 'a') && (s1[i] <= 'z')) {
            s1[i] -= 32;
        }
        else if ((s1[i] >= 'A') && (s1[i] <= 'Z')) {
            s1[i] += 32;
        }
    }
    printf("%s", s1);
    return 0;
}
*/

 //특수문자 출력하기
// %%는 2개, 특수 문자를 출력할 때 사용되며, 백슬래시()를 특정 문자 뒤에 붙여서 표현
#include <stdio.h>

int main() {
    printf("!@#$%%^&*(\\'\"<>?:;");
    return 0;
}
