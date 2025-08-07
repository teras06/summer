/* ���ϸ�: assign18.c

 * ����: PA18. ���� ����Ʈ�� �÷��̸���Ʈ ����� �����Ϸ��� �Ѵ� �̹� ��ϵ� SONG ����ü �迭�� ���� ��, 
               ��ü �� ����� �����ְ� ����ڷκ��� �÷��̸���Ʈ�� �߰��� �뷡�� ��ȣ�� �����ϰ� �Ѵ�
               �÷��̸���Ʈ�� �뷡�� �߰��� ������ �÷��̸���Ʈ�� �� ��ϰ� ��ü ��� �ð��� �������� ����Ѵ� �÷��̸���Ʈ���� �ִ� 5� ����� �� �ִ�

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

typedef struct song
{
    int number;
    char title[20];
    char artist[20];
    GENRE genre;
    int time;
} SONG;

const char* genre_names[] = {
    "ballad", "hip-hop", "pop"
};

void print_Songs(SONG* songs, int size);
void Print(void);
void print_Playlist(SONG* playlist[], int count);


int main()
{
    Print();
    return 0;
}


void Print(void)
{
    SONG songs[8] = {
    {1, "thank u, next", "Ariana Grande", POP, 208},
    {2, "Attention", "Charlie Puth", POP, 211},
    {3, "�� ���� ����", "�ں���", BALLAD, 316},
    {4, "How Long", "Charlie Puth", POP, 198},
    {5, "I'm Fine", "��ź�ҳ��", HIPHOP, 299},
    {6, "����", "��ź�ҳ��", HIPHOP, 274},
    {7, "Awake", "��ź�ҳ��", BALLAD, 226},
    {8, "�Ƴ���", "MINO", HIPHOP, 241}
    };

    int size = sizeof(songs) / sizeof(songs[0]);

    SONG* playlist[5] = { NULL };
    int count = 0;
    int song_number;

    print_Songs(songs, size);

    while (count < 5)
    {
        printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
        scanf("%d", &song_number);

        if (song_number == 0)
        {
            return;
        }


        if (song_number < 1 || song_number > size)
        {
            printf("�߸��� �� ��ȣ�Դϴ�.\n");
            continue;
        }

        playlist[count] = &songs[song_number - 1];
        count++;

        print_Playlist(playlist, count);
    }

    printf("\n�÷��̸���Ʈ�� ���� á���ϴ�.\n");
    printf("���α׷��� �����մϴ�.");
}


void print_Songs(SONG* songs, int size)
{
    printf("    ����               ��Ƽ��Ʈ        �帣        ����ð�\n");

    for (int i = 0; i < size; i++)
    {
        printf("%-2d  %-18s %-15s %-10s %4d��\n", songs[i].number, songs[i].title, songs[i].artist, genre_names[songs[i].genre], songs[i].time);
    }
}


void print_Playlist(SONG* playlist[], int count) 
{
    printf("\n<< �÷��̸���Ʈ >>\n");

    if (count == 0) 
    {
        printf("�÷��̸���Ʈ�� ��� �ֽ��ϴ�.\n");
        return;
    }

    int totalPlayTime = 0;

    for (int i = 0; i < count; i++) 
    {
        if (playlist[i] != NULL) 
        {
            printf("%-18s %-15s %-10s %4d��\n", playlist[i]->title, playlist[i]->artist, genre_names[playlist[i]->genre], playlist[i]->time);
            totalPlayTime += playlist[i]->time;
        }
    }

    printf("�� ����ð�: %d��\n", totalPlayTime);
}