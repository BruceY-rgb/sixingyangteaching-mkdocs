/* ����5-5�� ʹ�ú����ж����������庯��prime(m)�ж�m�Ƿ�Ϊ��������mΪ����ʱ����1�����򷵻�0����������ֻ�ܱ�1��������������������1����������2��������*/

/* ʹ�ú����ж����� */
#include <stdio.h>
#include <math.h>					/* ������ƽ������������Ҫ������ѧ�� */
int prime(int m);
 
int main(void)
{
    int m;

    printf("Enter a number: "); 	/* ������ʾ */
    scanf ("%d", &m);
    
    if(prime(m) != 0){       			/* m�������� */
        printf("%d is a prime number!\n", m);  
    }else{               			/* m�������� */
        printf("No!\n");    
    } 							

    return 0;
} 

/* �ж������ĺ��� */
int prime(int m)
{
    int i, limit;

    if ( m <= 1) {              	/* С�ڵ���1������������ */
        return 0; 
    } else if (m == 2) {        	/* 2������ */
        return 1;
    } else{                    /* �������������2�������� */
        limit = sqrt(m) + 1;
        for(i = 2; i <= limit; i++){  
            if(m % i == 0){ 
                return 0;      /* ��m�ܱ�ĳ��i��������m��������������0 */
            }              
        }   
/* ��ѭ������������˵��m���ܱ��κ�һ��i��������m������������1 */
        return 1;
	}						
} 	




