#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void Creat_new(FILE **);

int main()
{
    setlocale(LC_ALL, "Russian");
    FILE *from;




        printf("\n 1-Создать новую запись. \n 2-Найти по номеру. \n 3-Найти по фамилии. \n 4-Изменить номер. \n 5-Изменить фамилию. \n 6-Удалить запись. \n 7-Закончить работу. \n");
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
            printf("Работа закончена.");
            return 0;

        default:
            printf( "Неправильный ввод.\n" );


        }

}
