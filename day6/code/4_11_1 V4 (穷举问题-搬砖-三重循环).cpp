/*����4-11-1����ש���⡣ĳ������Ҫ����ש�飬��֪����һ�˰�3�飬Ů��һ�˰�2�飬С�����˰�1�顣�������n�����ð�n��ש��������Щ�ᷨ��*/

/* n�����ð�n��ש������汾1 ����ѭ��*/
# include <stdio.h>
int main(void)
{    
    int children, cnt, men, n, women;

   	printf("Enter n: ");            /* ������ʾ */
    scanf ("%d", &n);
    cnt = 0;
    for(men = 0; men <= n; men++){
    	  for(women = 0; women <= n; women++){
    		 for(children = 0; children <= n; children++){
            	if((men+women+children == n) && (men*3+women*2+children*0.5 == n)){
               		printf("men=%d, women=%d, children=%d\n", men, women, children);
               		cnt++;
            	}
        	 }
		  }
	} 
	if(cnt == 0){
       printf("None\n");
    }
     
    return 0;
}


