/*����4-6-1��������Ϸ���Ľ���3-1�򵥵Ĳ�����Ϸ�����������µ����������ٶ�1~100�ڣ�����������������ı������Ƚϣ�����ȣ���ʾ���У������ȣ���ʾ�뱻�����Ĵ�С��ϵ����������7�Ρ�
*/ 

/* ������Ϸ-1 */
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main(void)
{
    int count = 0, flag, mynumber, yournumber;
    
    srand ( time(0) ); 			 /* �趨������Ĳ�����ϵͳʱ�ӹ��� */
    mynumber = rand() %100 + 1;  /* ������������һ��1~100֮��ı����� */
    flag = 0;                  	 /* flag��ֵΪ0��ʾû���У�Ϊ1��ʾ������*/
    while (count < 7){         	 /* ����ܲ�7�� */
        printf ("Enter your number: ");   	/* ��ʾ���������µ����� */
        scanf ("%d", &yournumber);
        count++; 
        if ( yournumber == mynumber ) {    	/* ����ȣ���ʾ���� */
            printf ("Lucky You!\n");
            flag = 1;
            break;                       	/* �Ѳ��У���ֹѭ�� */
        }else if ( yournumber > mynumber ){
            printf("Too big\n");
        }else{ 
            printf("Too small\n");
        }
    }
    if ( flag ==0 ){                    	/* ����7�λ�û���У���ʾ��Ϸ���� */
        printf ("Game Over!\n"); 
    }

    return 0;
}

