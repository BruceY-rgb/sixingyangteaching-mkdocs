/*����3-2����ż�ּҡ�����һ��������n��������n���Ǹ�������ͳ��������ż�����ж��ٸ��� */
 
/* ��ż�ּ� */
#include <stdio.h>
int main (void)
{
	int count_odd, count_even, i, n, number; 

	count_odd = 0; 			/* count_odd ��¼�����ĸ��� */
	count_even = 0; 		/* count_even ��¼ż���ĸ��� */
	printf("Enter n: ");   	/* ��ʾ����n */
	scanf ("%d", &n);
	printf("Enter %d numbers: ", n);	/* ��ʾ����n���� */
	for(i = 1; i <= n; i++){
    	scanf ("%d", &number);   
    	if( number % 2 != 0 ){  /* ��number����2����������0����Ϊ���� */
    	    count_odd++;    /* ͳ�������ĸ��� */
    	}else{               	/* ��number����2��������0����Ϊż�� */
    	    count_even++;   /* ͳ��ż���ĸ��� */
    	}
	}
	printf ("Odd: %d, Even: %d \n", count_odd, count_even);

	return 0;
}


