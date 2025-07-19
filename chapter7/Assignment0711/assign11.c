/* 파일명: assign11.c

 * 내용: PA11. 각 학생의 한 학기 성적은 중간고사 30점, 기말고사 30점, 팀프로젝트 30점, 출석 10점으로 계산된다
               학생이 모두 5명일 때, 학생별 총점을 구하고 중간고사, 기말고사, 팀프로젝트, 출석의 평균점을 구해서 출력하는 프로그램을 작성하라
               성적을 저장하는 2차원 배열은 다음과 같이 초기화해서 사용한다

 * 작성자: 김영재

 * 날짜: 2025.07.17
 */

#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 5
#include <stdio.h>

void Print(void);
void score_arr(int arr1[ARR_SIZE][ARR_SIZE], double average[]);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    int arr[ARR_SIZE][ARR_SIZE] = { { 28, 28, 26, 9, 0 }, { 30, 27, 30, 10, 0 }, { 25, 26, 24, 8, 0 }, { 18, 22, 22, 5, 0 }, { 24, 25, 30, 10, 0 } };
    double average[4];

    int i, j;

    score_arr(arr, average);

    for (i = 0; i < 5; i++)
    {
        printf("학 생   %d번:", i+1);
        for (j = 0; j < 4; j++)
        {
            printf("   %2d", arr[i][j]);
        }
        printf(" ==>  %2d\n", arr[i][4]);
    }

    printf("항목별 평균:   ");
    for (i = 0; i < 4; i++)
    {
        printf("%2.2f ", average[i]);
    }
}

void score_arr(int arr[ARR_SIZE][ARR_SIZE], double average[])
{
    int i,j;
    for (i = 0; i < ARR_SIZE; i++) //총점
    {
        for (j = 0; j < 4; j++)
        {
            arr[i][4] += arr[i][j];
        }
    }

    for (i = 0; i < 4; i++) //평균
    {
        int sum = 0;

        for (j = 0; j < ARR_SIZE; j++)
        {
            sum += arr[j][i];
        }
        average[i] = sum / (double)ARR_SIZE;
    }
}

