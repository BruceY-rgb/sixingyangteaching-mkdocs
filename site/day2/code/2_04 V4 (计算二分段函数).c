/*【例2-4】为鼓励居民节约用水，自来水公司采取按月用水量分段计费的办法，居民应交水费y（元）与月用水量x（吨）的函数关系式如下（设x≥0）。
输入用户的月用水量x（吨），计算并输出该用户应支付的水费y（元）（保留2位小数）。*/

/* 计算二分段函数 */
# include <stdio.h> 
int main(void)
{
    double x, y;        	                /* 定义两个双精度浮点型变量 */

    printf("Enter x (x>=0):\n");			/* 输入提示 */
	/*调用scanf()函数输入数据,变量名x前面要加&,%lf中的l是long的首字母*/
    scanf("%lf", &x);
	/* if-else语句 */
    if (x <= 15){ 
        y = 4 * x / 3;
    }else{
        y = 2.5 * x - 10.5; 
    }
    printf("y = f(%f) = %.2f\n", x, y);		/* 调用printf()函数输出结果 */

	return 0;
}
