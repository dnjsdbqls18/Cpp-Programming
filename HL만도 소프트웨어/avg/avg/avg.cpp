#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define student_num 10
#define index		 3

int main()
{
	int scores[student_num][index];
	int kor, eng, math;
    double avg[student_num];
    int min_scores[index] = { 100, 100, 100 };
    int student_ids[index] = { 0 };
    double avg_scores[] = { 100 };

    // 2���� �迭�� �̿��Ͽ� 10�����κ��� 3���� ������ �Է� �ް� ��� �ް� ��հ� ����
	for (int i = 0; i < student_num; i++)
	{
		printf("% d�� �л��� ���� ���� ���� ������ ������� �Է��ϼ���.(�Է°� 0~100): ", i + 1);
		scanf("%d %d %d", &kor, &eng, &math);
        scores[i][0] = kor;
        scores[i][1] = eng;
        scores[i][2] = math;
        avg[i] = (scores[i][0] + scores[i][1] + scores[i][2]) / 3.0;
	}
    printf("\n");
    printf("<10���� ������ ��հ��� ���>\n");
    printf("�й� | ���� | ���� | ���� | ���\n");
    // 10���� ������ ��հ��� ���
    for (int i = 0; i < student_num; i++)
    {
        printf("%2d   | %3d | %3d | %3d | %.2lf\n", i + 1, scores[i][0], scores[i][1], scores[i][2], avg[i]);
    }

    // ���� ���� ������ �й�
    for (int i = 0; i < index; i++) 
    {
        for (int j = 0; j < student_num; j++)
        {
            if (scores[j][i] < min_scores[i])
            {
                min_scores[i] = scores[j][i];
                student_ids[i] = j + 1;
            }
        }
    }

    printf("\n");
    printf("<���� ���� ������ �й�>\n");
    printf("���� | ���� ���� | �й�\n");
    printf("���� | %3d | %2d\n", min_scores[0], student_ids[0]);
    printf("���� | %3d | %2d\n", min_scores[1], student_ids[1]);
    printf("���� | %3d | %2d\n", min_scores[2], student_ids[2]);

    // ��հ��� ���� ������ ���
    for (int i = 0; i < student_num - 1; i++)
    {
        for (int j = 0; j < student_num - i - 1; j++)
        {
            if (avg[j] > avg[j + 1])
            {
                double temp = avg[j];
                avg[j] = avg[j + 1];
                avg[j + 1] = temp;

                for (int k = 0; k < index; k++)
                {
                    int temp_score = scores[j][k];
                    scores[j][k] = scores[j + 1][k];
                    scores[j + 1][k] = temp_score;
                }
            }
        }
    }

    printf("\n");
    printf("<��հ��� ���� ������ ���>\n");
    printf("�й� | ���� | ���� | ���� | ���\n");
    for (int i = 0; i < student_num; i++)
    {
        printf("%2d   | %3d | %3d | %3d | %.2lf\n", i + 1, scores[i][0], scores[i][1], scores[i][2], avg[i]);
    }

    return 0;

    return 0;
}
