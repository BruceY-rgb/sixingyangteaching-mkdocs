/*����4-5-2���ж�һ�������Ƿ�Ϊ����������һ������m���ж����Ƿ�Ϊ��������������ֻ�ܱ�1��������������������1����������2��������
*/
 
/* �ж�����m�Ƿ�Ϊ����-2 */
# include <stdio.h>
# include <math.h>
int main(void)
{
    int i, is_prime, limit, m;  /* is_prime��ֵ��ʾ�Ƿ�Ϊ���� */

    printf("Enter a number: "); /* ������ʾ */
    scanf ("%d", &m);
    if ( m <= 1) {              /* С�ڵ���1��������������is_prime��Ϊ0*/
        is_prime = 0; 
    } else if (m == 2) {        /* 2��������is_prime��Ϊ1 */
        is_prime = 1;
    } else{                     /* ��������ȼ�����������is_prime��ֵ��Ϊ1 */
        is_prime = 1;
	    limit = sqrt(m) + 1;
	    for(i = 2; i <= limit; i++){ /* ��21�� */
	        if(m % i == 0){
	            is_prime = 0;       /* ��m�ܱ�ĳ��i��������m����������is_prime��Ϊ0 */
	            break;              /* ��ǰ����ѭ�� */
	        }
	    }    
	} 
    /* ��ѭ������������˵��m���ܱ��κ�һ��i��������is_prime��ֵΪ1���� */
    if(is_prime == 1){          /* m������ */
        printf("%d is a prime number!\n", m);  
    }else{                      /* m�������� */
        printf("No!\n"); 
    } 

    return 0;
} 

