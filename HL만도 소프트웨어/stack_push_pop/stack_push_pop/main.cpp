#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 3

int stack[STACK_SIZE]; // ���� �迭
int top = -1; // �Ⱚ�� -1�� ������ ��������� ��Ÿ��

// ������ ���� á���� Ȯ���ϴ� �Լ�
int isFull()
{
    if (top >= STACK_SIZE - 1) // top�� ������ ũ�⺸�� �ϳ� ������ ���� �� ����
    {
        printf("\n");
        printf("����: ������ ���� á���ϴ�.\n");
        return 1; // �� ��ȯ
    }
    return 0; // ���� ��ȯ
}

// ������ ��� �ִ��� Ȯ���ϴ� �Լ�
int isEmpty()
{
    if (top == -1) // top�� -1�̸� ������ ����ִ� ����
    {
        printf("\n");
        printf("����: ������ ��� �ֽ��ϴ�.\n");
        return 1; // �� ��ȯ
    }
    return 0; // ���� ��ȯ
}

// ���ÿ� �����͸� �߰��ϴ� �Լ�
void push(int data)
{
    if (!isFull()) // ������ ���� ���� �ʾ�����
    {
        top++; // top�� �������� ������ ���� ��ġ�� �̵�
        stack[top] = data; // �ش� ��ġ�� ������ �߰�
    }
}

// ���ÿ��� �����͸� �����ϰ� ��ȯ�ϴ� �Լ�
int pop()
{
    if (!isEmpty()) // ������ ������� ������
    {
        return stack[top--]; // top�� ����Ű�� ��ġ�� �����͸� ��ȯ�ϰ� top�� ���ҽ��� ���� �����͸� ����Ű�� ��
    }
    return -1; // ������ ��������� -1 ��ȯ
}

// ������ ������ ����ϴ� �Լ�
void printStack()
{
    if (!isEmpty()) // ������ ������� ������
    {
        printf("\n");
        printf("���� ������ top ��ġ: %d:\n", top); // ���� top�� ��ġ ���
        printf("���� ���� ������ : \n");
        for (int i = top; i >= 0; i--) // top���� �Ųٷ� ������ ���
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
        printf("3. ���� ���\n");
        printf("4. ����\n");
        printf("����: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("���� ������ �Է��ϼ���: ");
            scanf("%d", &input);
            push(input); // �Է� ���� ���� ���ÿ� �߰�
            printStack(); // ���� ���
            break;
        case 2:
            if (!isEmpty()) // ������ ������� ������
            {
                printf("\n");
                printf("�������� ������: %d\n", pop()); // ���ÿ��� �����͸� �����ϰ� ���
            }
            printStack(); // ���� ���
            break;
        case 3:
            printStack(); // ���� ���
            break;
        case 4:
            printf("\n");
            printf("���α׷� ����\n");
            break;
        default:
            printf("1���� 4 ������ ���ڸ� �Է�\n");
        }
    } while (choice != 4); // ����ڰ� 4�� ������ ������ �ݺ�

    return 0;
}
