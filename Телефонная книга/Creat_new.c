#include <stdio.h>
#include <string.h>

 void Creat_new (FILE** from)
{

    char str[20]={0};
    char str1[20]={0};
    printf("������� �������:");
    gets(str);

    printf("������� �����:");
    gets(str1);

    *from = fopen("���������� �����.txt", "a+");
    int c;
    int i=0;
    char strkek[20]={0};
    while (c!=-1) ///��������� ���� �� ������ �������
        {
            c=getc(*from);

            if (c==32)
                {
                    printf("%s",strkek);
                    if (strcmp (str, strkek)==0)
                        {
                            puts("������ ������� ��� ����������");
                            return ;
                        }
                        strcpy(strkek, "");
                }

            if (c==10){strcpy(strkek, "");}
            strkek[i]=c;
            i++;
        }


    fclose(*from);
}
