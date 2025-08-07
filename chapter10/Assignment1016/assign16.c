/* ���ϸ�: assign16.c

 * ����: PA16. ���� ����Ʈ�� ��ϵ� �뷡 ������ �����ϱ� ���� ���α׷��� �ۼ��϶� �뷡���� ���, ����, �帣, ��� �ð��� ������ �� �ְ� SONG ����ü�� �����Ѵ� 
               �帣�� ����ü�� ���� ����� �̿��ؼ� ��Ÿ���� SONG ����ü �迭�� �����ϰ� ������ �ʱ�ȭ�� ���� ��ü �뷡 ����� �帣���� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �迵��

 * ��¥: 2025.08.04
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
        {"�� ���� ����", "�ں���", BALLAD, 316},
        {"Awake", "��ź�ҳ��", BALLAD, 226},
        {"I'm Fine", "��ź�ҳ��", HIPHOP, 299},
        {"����", "��ź�ҳ��", HIPHOP, 274},
        {"�Ƴ���", "MINO", HIPHOP, 241},
        {"thank u, next", "Ariana Grande", POP, 208},
        {"Attention", "Charlie Puth", POP, 211},
        {"How Long", "Charlie Puth", POP, 198}
    };

    int size = sizeof(songs) / sizeof(songs[0]);

    print_Songs(songs, size);
}

void print_Songs(SONG* songs, int size)
{
    printf("����               ��Ƽ��Ʈ        �帣        ����ð�\n");

    for (int i = 0; i < size; i++)
    {
        printf("%-18s %-15s %-10s %4d��\n", songs[i].title, songs[i].artist, genre_names[songs[i].genre], songs[i].time);
    }
}