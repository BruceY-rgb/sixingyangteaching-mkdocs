/* ����3-3������һ���Ǹ�����n��������n��ѧ���ĳɼ�������ƽ���֣���ͳ�Ʋ�����ɼ���ѧ�������� */ 

/* ����һ��ѧ���ĳɼ�������ƽ���֣���ͳ�Ʋ�����ɼ���ѧ������ */
# include <stdio.h>
int main(void)
{
	int count, i, n;   		/* count ��¼������ɼ��ĸ��� */
	double score, total;  	/* score�������ĳɼ�, total����ɼ�֮�� */

	printf("Enter n: ");   	/* ��ʾ����ѧ������n */
	scanf("%d", &n);
	total = 0;
	count = 0;
	for(i = 1; i <= n; i++){
    	printf("Enter score #%d: ", i);	/* ��ʾ�����i���ɼ� */
    	scanf ("%lf", &score);  			/* �����i���ɼ���%lf �е�l����ĸ */
    	total = total + score;   			/* �ۼӳɼ� */
    	if(score< 60){					/* ͳ�Ʋ�����ɼ���ѧ������ */
    	    count++;
    	}
	}
    if(n != 0){
    	printf("Average = %.2f\n", total / n);  /* ��ĸ����Ϊ0 */
    }else{
    	printf("Average = %.2f\n", 0.0);   	/* ��nΪ0ʱ��ƽ����Ϊ0 */
    }
    printf("Number of failures = %d\n", count);

    return 0;
}

