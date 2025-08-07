/* ���ϸ�: assign17.c

 * ����: PA17. �뷡 ������ ���� ���α׷��� �˻� ����� �߰��Ϸ��� �Ѵ� ��� �Ǵ� ���� ���� �Է¹޾Ƽ� �ش� �뷡 ������ ã�Ƽ� ����ϴ� ���α׷��� �ۼ��϶� 
               ����̳� �������� ��ġ�ϴ� �뷡�� ���� ���� ��� ����Ѵ�

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

    char keyword[30];

    while (1)
    {
        printf("Ű����(����/��Ƽ��Ʈ)? ");
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
            printf("%-18s %-15s %-10s %4d��\n", songs[i].title, songs[i].artist, genre_names[songs[i].genre], songs[i].time);
            found = 1;
        }
    }

    if (!found)
    {
        printf("�˻��� �뷡�� �����ϴ�.\n");
    }
}