/*����3-1���򵥵Ĳ�����Ϸ�����������µ��������ٶ�1~100�ڣ��������������ı������Ƚϣ�����ȣ���ʾ���У������ȣ���ʾ�뱻�����Ĵ�С��ϵ��*/

/* �򵥵Ĳ�����Ϸ */
# include <stdio.h>
int main(void)
{
    int  mynumber = 38;                /* �����ָ�����µ��� */
    int  yournumber;

    printf("Input your number: ");     /* ��ʾ���������µ����� */
    scanf("%d", &yournumber);
    if(yournumber == mynumber){         /* ����ȣ���ʾ���� */
        printf("Good Guess!\n");
    }else if(yournumber > mynumber ){   /* �����ȣ��ٱȽϴ�С */
        printf("Too big!\n");
    }else{ 
        printf("Too small!\n");
    }

    return 0;
}


