/*����4-2��ͳ��һ��ѧ����ƽ���ɼ��벻����������������3-3���Ӽ�������һ��ѧ���ĳɼ�������ƽ���ɼ�����ͳ�Ʋ�����ѧ����������
*/
 
/* ����һ��ѧ���ĳɼ����Ը�����Ϊ������־������ƽ���ɼ�����ͳ�Ʋ��������� */
# include <stdio.h>
int main(void)
{
    int count, num;             /* num ��¼����ĸ�����count��¼���������� */
    double score, total; 		/* �ֱ��ųɼ����ɼ�֮�� */
 
    num = 0;
    total = 0;
    count = 0;
    printf("Enter scores: ");      /* ������ʾ */
    scanf ("%lf", &score);       	/* �����һ�����ݣ�%lf�е�l����ĸ */
    /* ����������score���ڵ���0ʱ��ִ��ѭ�� */
    while (score >= 0){
        total = total + score;    /* �ۼӳɼ� */
        num++;               /* ���� */
        if (score < 60){
            count++;
        }
        scanf ("%lf", &score);   	/* ����һ�������ݣ�Ϊ�´�ѭ����׼�� */
    }
    if (num != 0) {
        printf("Average is %.2f\n", total / num);
        printf("Number of failures is %d\n", count);
    }else{
        printf("Average is 0\n");
    }

    return 0;
}

