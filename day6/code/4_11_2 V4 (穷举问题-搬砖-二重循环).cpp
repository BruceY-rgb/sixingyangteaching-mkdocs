/*����4-11-2����ש���⡣ĳ������Ҫ����ש�飬��֪����һ�˰�3�飬Ů��һ�˰�2�飬С�����˰�1�顣�������n�����ð�n��ש��������Щ�ᷨ��*/

/* n�����ð�n��ש������汾2������ѭ�� */
# include <stdio.h>
int main(void)
{    
    int children, cnt, limit_m, limit_w, men, n, women;

   	printf("Enter n: ");            /* ������ʾ */
    scanf ("%d", &n);
    limit_m = n/3;
    limit_w = n/2;
    cnt = 0;
    for(men = 0; men <= limit_m; men++){
    	for(women = 0; women <= limit_w; women++){
            children = n - men - women ; 
            if((men*3 + women*2 + children*0.5 == n)){
               	printf("men=%d, women=%d, children=%d\n", men, women, children);
               	cnt++;
            }
        }
	}
	if(cnt == 0){
       printf("None\n");
    }
     
    return 0;
}

