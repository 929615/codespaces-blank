#include <stdio.h>
 
int main()
{
    int number;
 
    printf("������һ������: ");
    scanf("%d", &number);
 
    // �ж���������� 2 ������
    if(number % 2 == 0)
       printf("%d ��ż����", number);
    else
        printf("%d ��������", number);
 
    return 0;
}
