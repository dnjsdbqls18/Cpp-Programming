#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define student_num 10
#define index       3

int main()
{
    int scores[student_num][index];
    double avg[student_num];
    int student_ids[student_num];
    int min_scores[index] = { 100, 100, 100 };
    int min_student_ids[index];

    for (int i = 0; i < student_num; i++)
    {
        int kor, eng, math;
        printf("%d번 학생의 국어 영어 수학 점수를 순서대로 입력하세요.(입력값 0~100): ", i + 1);
        scanf("%d %d %d", &kor, &eng, &math);
        scores[i][0] = kor;
        scores[i][1] = eng;
        scores[i][2] = math;
        avg[i] = (kor + eng + math) / 3.0;
        student_ids[i] = i + 1;
    }

    printf("\n");
    printf("<10명의 성적과 평균값을 출력>\n");
    printf("학번 | 국어 | 영어 | 수학 | 평균\n");
    for (int i = 0; i < student_num; i++)
    {
        printf("%2d   | %3d | %3d | %3d | %.2lf\n", student_ids[i], scores[i][0], scores[i][1], scores[i][2], avg[i]);
    }

    for (int i = 0; i < index; i++)
    {
        min_student_ids[i] = 1; 
        for (int j = 1; j < student_num; j++)
        {
            if (scores[j][i] < min_scores[i])
            {
                min_scores[i] = scores[j][i];
                min_student_ids[i] = student_ids[j];
            }
        }
    }

    printf("\n");
    printf("<과목별 최저 점수와 학번>\n");
    printf("과목 | 최저 점수 | 학번\n");
    printf("국어 | %3d | %2d\n", min_scores[0], min_student_ids[0]);
    printf("영어 | %3d | %2d\n", min_scores[1], min_student_ids[1]);
    printf("수학 | %3d | %2d\n", min_scores[2], min_student_ids[2]);

    for (int i = 0; i < student_num - 1; i++)
    {
        for (int j = 0; j < student_num - i - 1; j++)
        {
            if (avg[j] > avg[j + 1])
            {
                double temp_avg = avg[j];
                avg[j] = avg[j + 1];
                avg[j + 1] = temp_avg;

                int temp_id = student_ids[j];
                student_ids[j] = student_ids[j + 1];
                student_ids[j + 1] = temp_id;

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
    printf("<평균값이 낮은 순서로 출력>\n");
    printf("학번 | 국어 | 영어 | 수학 | 평균\n");
    for (int i = 0; i < student_num; i++)
    {
        printf("%2d   | %3d | %3d | %3d | %.2lf\n", student_ids[i], scores[i][0], scores[i][1], scores[i][2], avg[i]);
    }

    return 0;
}
