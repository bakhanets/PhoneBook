#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void Creat_new(FILE **);

int main()
{
    setlocale(LC_ALL, "Russian");
    FILE *from;




        printf("\n 1-������� ����� ������. \n 2-����� �� ������. \n 3-����� �� �������. \n 4-�������� �����. \n 5-�������� �������. \n 6-������� ������. \n 7-��������� ������. \n");
        int x;
        scanf("%d",&x);


        switch ( x )
        {
        case 1:
            Creat_new(&from);

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

             break;

        case 6:

            break;

        case 7:
            printf("������ ���������.");
            return 0;

        default:
            printf( "������������ ����.\n" );


        }

}
