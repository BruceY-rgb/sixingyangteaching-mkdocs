/*����5-6�����ֽ�����������һ��������n�����n�����ֽ�������*/ 

/* ������ֽ����� */
#include <stdio.h>

void pyramid(int n);		/* �������� */

int main(void)
{   
	int n;

	printf("Enter n: ");
	scanf("%d", &n);
	pyramid(n);				/* ���ú��������n�����ֽ����� */

	return 0;
}

void pyramid(int n)               /* �������壬���n�����ֽ�����*/
{		
	int i, j;

	for(i = 1; i <= n; i++){			/* ��Ҫ��������� */
		for(j = 1; j <= n-i; j++){ 	    /* ���ÿ����ߵĿո� */
			printf(" ");
		}		        
		for(j = 1; j <= i; j++){  		/* ���ÿ�е����� */ 
			printf("%d ", i);			/* %d������1���ո� */
		}	    
		putchar('\n');			    
	}
	
	return;
}

