/*����4-5-1���ж�һ�������Ƿ�Ϊ����������һ������m���ж����Ƿ�Ϊ��������������ֻ�ܱ�1��������������������1����������2��������
*/
 
/* �ж�����m�Ƿ�Ϊ����-1 */
# include <stdio.h>
# include <math.h>
int main(void)
{
    int i, limit, m;

    printf("Enter a number: "); 	/* ������ʾ */
    scanf ("%d", &m);
    if ( m <= 1) {              	/* С�ڵ���1������������ */
        printf("No!\n"); 
    } else if (m == 2) {        	/* 2������ */
        printf("%d is a prime number!\n", m);
    } else{                     	/* �������������2�������� */
        limit = sqrt(m) + 1;
        for(i = 2; i <= limit; i++){	/* ��16�� */
            if(m % i == 0){ 
                break;     			/* ��m�ܱ�ĳ��i��������m������������ǰ����ѭ�� */
            }              
        }   
        if(i > limit){       		/* ��ѭ������������˵��m���ܱ��κ�һ��i���� */
            printf("%d is a prime number!\n", m);  
        }else{               		/* m�������� */
            printf("No!\n");    
        } 							/* ��25�� */
    } 

    return 0;
} 

