#include <stdio.h>
#include <iostream>
#include <string.h>

/*
��P��(���2�_)
�ȉ��̌v�Z��2�i���œ�����B
00101100 + 01010101  
10110000 + 00001111
*/
// ��.�オ10000001�@�A�@����10111111




/*
��Q��(���2�_)
��P��̓�����10�i���œ�����
*/
// ��.�オ109 �A����191

/*
��R��(���2�_)
char�Aint�Afloat�Adouble�̃o�C�g�T�C�Y�͂��ꂼ�ꂢ����������B
*/
//��.char = 1 , int = 4 , float = 4 , double = 8

/*
��S��(���2�_)
char* �Aint * �Afloat * �Adouble * �̃o�C�g�T�C�Y�͂��ꂼ�ꂢ����������B
*/
// ��.char = 4 , int = 4 , float = 4 , double = 4

/*
��T��(20�_)
�ȉ��̃v���O���������s�����ꍇ�A
�@�`�B�̂ǂ̕��������s����邩������B
int main()
{
    int num = 5;

    num = num % 3;

    if (num == 0)
    {
        �@
    }
    else if (num == 2)
    {
        �A
    }
    else
    {
        �B
    }
}
*/
// ��.�Q

/*
��U��(25�_)
���l��2���͂��A
1�Ԗڂɓ��͂��ꂽ�l����Ȃ瑫���Z�A
1�Ԗڂɓ��͂��ꂽ�l�������Ȃ�����Z���s���v���O�������쐬����B

����)
1 // 1�Ԗڂɓ��͂��ꂽ�l
5 // 2�Ԗڂɓ��͂��ꂽ�l
6 // 1�Ԗڂ���Ȃ̂ő����Z

4 // 1�Ԗڂɓ��͂��ꂽ�l
3 // 2�Ԗڂɓ��͂��ꂽ�l
1 // 1�Ԗڂ������Ȃ̂ň����Z

*/
/*
// �ȉ���
int main()
{
    int a;
    int b;

    printf("���l1�����\n");
    scanf_s("%d", &a);


    printf("���l2�����\n");
    scanf_s("%d", &b);

    if (a % 2 == 0)
    {
        printf("�����������̂ő����Z���s���܂�\n");
        printf("%d + %d = %d", a, b, a + b);
    }

    else
    {
        printf("��������̂ň����Z���s���܂�\n");
        printf("%d - %d = %d", a, b, a - b);
    }
}
*/

/*
��V��(25�_)
��U��̃v���O���������[�v�ōs���悤�ɂ��A
end�Ɠ��͂��ꂽ�ꍇ�I������悤�ɂ��Ă��������B
end�̓��͂�1�Ԗڂ̒l�̏ꏊ�ł��A2�Ԗڂ̒l�̏ꏊ�ł��A
�ʓrend�̓��͂��󂯕t����悤�ł��ǂ�ł������ł��B
�ǂ����ꂩ����end�Ɠ��͂��ďI�����Ă���ΐ����Ƃ��܂��B
*/
// �ȉ���
int main()
{
    int a;
    int b;

    char end[4] = {};
    int error = -1;


    while (1)
    {
        printf("end����͂���ƏI��\n");

        printf("���l1�����\n");
        scanf_s("%d", &a);


        printf("���l2�����\n");
        scanf_s("%d", &b);

        if (a % 2 == 0)
        {
            printf("�����������̂ő����Z���s���܂�\n");
            printf("%d + %d = %d", a, b, a + b);
           
        }

        else
        {
            printf("��������̂ň����Z���s���܂�\n");
            printf("%d - %d = %d", a, b, a - b);
         
        }


        error = scanf_s("%s%c", end, 4);

        if (error == 0)
        {
            continue;
        }

        if (strcmp(end, "end") == 0)
        {
            break;
        }
    }
    return 0;
}

/*
��W��(10�_)
�ȉ��̃v���O�������G���[���������A�R���p�C���G���[���Ȃ���Ԃɂ��A
���s�ł���悤�ɂ��Ă��������B
�𓚂��G���[�����R�����g�A�E�g���Ď��s�ł���悤�ɂ���̂�NG�ł��B
(�r���m�F�̂��߂ɃR�����g�A�E�g�����镪��OK�ł��B)
�ԈႦ�Ă������4�����ł��B
*/

/*
class Point
{
public:
    Point() { Clear(); }

    void Clear()
    {
        x = 0;
        y = 0;
        z = 0;
    }
public:
    int x, y, z;
};

int main()
{
    Point point;
    Point nextPoint;

    nextPoint.x = 100;
    nextPoint.y = 30;

    while (1)
    {
        if (point.x < nextPoint.x)
        {
            point.x++;
        }
        else if (point.x > nextPoint.x)
        {
            point.x--;
        }

        if (point.y < nextPoint.y)
        {
            point.y++;
        }
        else if (point.y > nextPoint.y)
        {
            point.y--;
        }
        printf("pointX = %d\n", point.x);
        printf("pointY = %d\n", point.y);

        if (point.x == nextPoint.x &&
            point.y == nextPoint.y)
        {
            break;
        }
    }
}
*/
