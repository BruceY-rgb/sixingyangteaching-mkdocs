/*����2-6��������������lower�� upper�����һ�Ż��ϣ������¶�ת���������¶ȵ�ȡֵ��Χ��[lower, upper]��ÿ������1��F�����㹫ʽ���£�ʽ�У�c��ʾ�����¶ȣ�f��ʾ�����¶ȡ�*/
  
/* ������ϣ������¶�ת���������¶�ȡֵ[lower,upper]��ÿ������1��F */
#include <stdio.h>
int main(void)
{    
   /* fahr��ʾ���϶�, celsiusΪ���϶�,lowerΪ�����¶�����,upperΪ���� */
   int fahr, lower, upper;
   double celsius;   

   printf("Enter lower:");				/* ������ʾ */
   scanf("%d", &lower);					/* ����scanf()��������lower */
   printf("Enter upper:");				/* ������ʾ */
   scanf("%d", &upper);					/* ����scanf()��������upper */

   /* �ж��������ݵĺϷ��ԣ���lower�Ƿ�С�ڵ���upper */
   if(lower <= upper){            /* lowerС�ڵ���upperʱ��ת���¶Ȳ����*/
      printf("fahrcelsius\n");    /* ����¶�ת����ı�ͷ */
      /* �¶��ظ�ת���������¶ȴ�lower��ʼ����upper������ÿ������1��F */
      for (fahr = lower ; fahr<= upper; fahr ++){ 
         celsius = (5.0 / 9.0) * (fahr - 32);  /* �¶�ת������ */
         printf("%4d%6.1f\n", fahr, celsius);  /* ��� */
      }                                              	
   }else{                                    /* lower����upperʱ */
       printf("Invalid Value!\n");            /* ���������ʾ */  
   }                                          	    

   return 0;
}
