/* ����4-4���������һ�������ĸ�λ���֡�����һ���������������������*/ 

/* �������һ�������ĸ�λ���� */
#include <stdio.h>
int main(void)
{
    int number; 

    printf("Enter a number: ");           /* ������ʾ */
    scanf ("%d", &number);
    do{
        printf("%d ", number % 10);
        number = number / 10;
    } while(number != 0);

    return 0;
}


