/* 파일명: assign17.c

 * 내용: PA17. 노래 정보를 관리 프로그램에 검색 기능을 추가하려고 한다 곡명 또는 가수 명을 입력받아서 해당 노래 정보를 찾아서 출력하는 프로그램을 작성하라 
               곡명이나 가수명이 일치하는 노래가 여러 개면 모두 출력한다

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
void search_Songs(SONG* songs, int size, const char* keyword);
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

    char keyword[30];

    while (1)
    {
        printf("키워드(제목/아티스트)? ");
        fgets(keyword, sizeof(keyword), stdin);

        keyword[strcspn(keyword, "\n")] = '\0';

        if (strcmp(keyword, ".") == 0)
        {
            break;
        }

        search_Songs(songs, size, keyword);
    }
}

void search_Songs(SONG* songs, int size, const char* keyword)
{
    int found = 0;

    int i;
    for (i = 0; i < size; i++)
    {
        if (strstr(songs[i].title, keyword) != NULL || strstr(songs[i].artist, keyword) != NULL)
        {
            printf("%-18s %-15s %-10s %4d초\n", songs[i].title, songs[i].artist, genre_names[songs[i].genre], songs[i].time);
            found = 1;
        }
    }

    if (!found)
    {
        printf("검색된 노래가 없습니다.\n");
    }
}