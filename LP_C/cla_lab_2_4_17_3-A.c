#include <stdio.h>
int main(void)
{
int dayOfWeek = 1;
system("chcp 1251");
  system("cls");
  printf("������ ����� ��� �����: ");
  scanf("%d",&dayOfWeek);
  printf("���� �����: ");
  switch (dayOfWeek)
  {
    case 1:	printf("��������"); break;
    case 2: printf("�������"); break;
    case 3: printf("������"); break;
    case 4: printf("������"); break;
    case 5: printf("�'������"); break;
    case 6: printf("������"); break;
    case 7: printf("�����"); break;
    default: printf("������� ���� �����"); break;
  }
  getchar();

return 0;
}

