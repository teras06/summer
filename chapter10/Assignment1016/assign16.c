/* 파일명: assign16.c

 * 내용: PA16. 음원 사이트에 등록된 노래 정보를 관리하기 위한 프로그램을 작성하라 노래마다 곡명, 가수, 장르, 재생 시간을 저장할 수 있게 SONG 구조체를 정의한다 
               장르는 열거체와 열거 상수를 이용해서 나타내라 SONG 구조체 배열을 선언하고 적절히 초기화한 다음 전체 노래 목록을 장르별로 출력하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.08.04
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef enum {
    BALLAD,
    HIPHOP,
    POP,
    GENRE_COUNT
} GENRE;

const char* genre_names[] = {
    "ballad", "hip-hop", "pop"
};

typedef struct song {
    char title[30];
    char artist[30];
    GENRE genre;
    int time;
} SONG;

void print_Songs(SONG* songs, int size);
void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    SONG songs[8] = {
        {"별 보러 가자", "박보검", BALLAD, 316},
        {"Awake", "방탄소년단", BALLAD, 226},
        {"I'm Fine", "방탄소년단", HIPHOP, 299},
        {"봄날", "방탄소년단", HIPHOP, 274},
        {"아낙네", "MINO", HIPHOP, 241},
        {"thank u, next", "Ariana Grande", POP, 208},
        {"Attention", "Charlie Puth", POP, 211},
        {"How Long", "Charlie Puth", POP, 198}
    };

    int size = sizeof(songs) / sizeof(songs[0]);

    print_Songs(songs, size);
}

void print_Songs(SONG* songs, int size)
{
    printf("제목               아티스트        장르        재생시간\n");

    for (int i = 0; i < size; i++)
    {
        printf("%-18s %-15s %-10s %4d초\n", songs[i].title, songs[i].artist, genre_names[songs[i].genre], songs[i].time);
    }
}