/*����5-8���ú���ʵ�ֲ����ֽ���ˡ�������������ͣ�1���룬2֧����0������������������������ֽ�ʣ���ɶ�β���ֱ�������������Ϊ0ʱ������Ҫ���岢���ú����������ֽ��������ֽ�֧���ֱ��ò�ͬ����ʵ�֡�*/

#include<stdio.h> 

void income(double number), expend(double number);	/* ��������  */

double cash;								/* ����ȫ�ֱ����������ֽ���� */
int main(void) 
{ 
    int choice;
    double value;

    cash = 0;									/* ��ʼ���=0 */
    printf("Enter operate choice(0--end, 1--income, 2--expend):");
    scanf("%d", &choice);				/* ����������� */
    while (choice != 0){	            /*  ����������Ϊ0��ѭ������  */
	    if (choice == 1 || choice == 2) {
		    printf("Enter cash value:"); /* ��������ֽ�� */
		    scanf("%lf", &value); 
		    if (choice == 1){
			    income(value);			/* �������ã������ֽ����� */
		    }else{
				expend(value);		     	/* �������ã������ֽ�֧�� */
		    }
		    printf("current cash:%.2f\n", cash);
	    }
	    printf("Enter operate choice(0--end, 1--income, 2--expend):");
	    scanf("%d", &choice);		     /* ��������������� */
     }

     return 0;
}

/* ��������ֽ����뺯�� */
void income(double number)
{
	cash = cash + number;				/*  �ı�ȫ�ֱ���cash  */
}

/* ��������ֽ�֧������ */
void expend(double number)
{
	cash = cash - number;				/*  �ı�ȫ�ֱ���cash  */
}

