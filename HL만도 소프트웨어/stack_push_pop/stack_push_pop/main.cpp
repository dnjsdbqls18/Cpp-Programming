#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 3

int stack[STACK_SIZE]; // 스택 배열
int top = -1; // 기값은 -1로 스택이 비어있음을 나타냄

// 스택이 가득 찼는지 확인하는 함수
int isFull()
{
    if (top >= STACK_SIZE - 1) // top이 스택의 크기보다 하나 작으면 가득 찬 상태
    {
        printf("\n");
        printf("오류: 스택이 가득 찼습니다.\n");
        return 1; // 참 반환
    }
    return 0; // 거짓 반환
}

// 스택이 비어 있는지 확인하는 함수
int isEmpty()
{
    if (top == -1) // top이 -1이면 스택이 비어있는 상태
    {
        printf("\n");
        printf("오류: 스택이 비어 있습니다.\n");
        return 1; // 참 반환
    }
    return 0; // 거짓 반환
}

// 스택에 데이터를 추가하는 함수
void push(int data)
{
    if (!isFull()) // 스택이 가득 차지 않았으면
    {
        top++; // top을 증가시켜 스택의 다음 위치로 이동
        stack[top] = data; // 해당 위치에 데이터 추가
    }
}

// 스택에서 데이터를 제거하고 반환하는 함수
int pop()
{
    if (!isEmpty()) // 스택이 비어있지 않으면
    {
        return stack[top--]; // top이 가리키는 위치의 데이터를 반환하고 top을 감소시켜 이전 데이터를 가리키게 함
    }
    return -1; // 스택이 비어있으면 -1 반환
}

// 스택의 내용을 출력하는 함수
void printStack()
{
    if (!isEmpty()) // 스택이 비어있지 않으면
    {
        printf("\n");
        printf("현재 스택의 top 위치: %d:\n", top); // 현재 top의 위치 출력
        printf("현재 스택 데이터 : \n");
        for (int i = top; i >= 0; i--) // top부터 거꾸로 스택을 출력
        {
            printf("%d\n", stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice, input;

    do
    {
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. 스택 출력\n");
        printf("4. 종료\n");
        printf("선택: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("넣을 정수를 입력하세요: ");
            scanf("%d", &input);
            push(input); // 입력 받은 값을 스택에 추가
            printStack(); // 스택 출력
            break;
        case 2:
            if (!isEmpty()) // 스택이 비어있지 않으면
            {
                printf("\n");
                printf("빠져나간 데이터: %d\n", pop()); // 스택에서 데이터를 제거하고 출력
            }
            printStack(); // 스택 출력
            break;
        case 3:
            printStack(); // 스택 출력
            break;
        case 4:
            printf("\n");
            printf("프로그램 종료\n");
            break;
        default:
            printf("1에서 4 사이의 숫자를 입력\n");
        }
    } while (choice != 4); // 사용자가 4를 선택할 때까지 반복

    return 0;
}
