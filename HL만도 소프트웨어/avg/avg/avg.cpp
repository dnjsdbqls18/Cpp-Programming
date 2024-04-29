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

    // 2차원 배열을 이용하여 10명으로부터 3개의 과목을 입력 받고 평균 받고 평균값 저장
	for (int i = 0; i < student_num; i++)
	{
		printf("% d번 학생의 국어 영어 수학 점수를 순서대로 입력하세요.(입력값 0~100): ", i + 1);
		scanf("%d %d %d", &kor, &eng, &math);
        scores[i][0] = kor;
        scores[i][1] = eng;
        scores[i][2] = math;
        avg[i] = (scores[i][0] + scores[i][1] + scores[i][2]) / 3.0;
	}
    printf("\n");
    printf("<10명의 성적과 평균값을 출력>\n");
    printf("학번 | 국어 | 영어 | 수학 | 평균\n");
    // 10명의 성적과 평균값을 출력
    for (int i = 0; i < student_num; i++)
    {
        printf("%2d   | %3d | %3d | %3d | %.2lf\n", i + 1, scores[i][0], scores[i][1], scores[i][2], avg[i]);
    }

    // 과목별 최저 점수와 학번
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
    printf("<과목별 최저 점수와 학번>\n");
    printf("과목 | 최저 점수 | 학번\n");
    printf("국어 | %3d | %2d\n", min_scores[0], student_ids[0]);
    printf("영어 | %3d | %2d\n", min_scores[1], student_ids[1]);
    printf("수학 | %3d | %2d\n", min_scores[2], student_ids[2]);

    // 평균값이 낮은 순서로 출력
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
    printf("<평균값이 낮은 순서로 출력>\n");
    printf("학번 | 국어 | 영어 | 수학 | 평균\n");
    for (int i = 0; i < student_num; i++)
    {
        printf("%2d   | %3d | %3d | %3d | %.2lf\n", i + 1, scores[i][0], scores[i][1], scores[i][2], avg[i]);
    }

    return 0;
}
