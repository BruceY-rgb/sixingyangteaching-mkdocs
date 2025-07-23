
# Welcome to 杨思行的C语言课堂 ✨

<div style="text-align: center; margin: 40px 0;">
    <img src="https://ts1.tc.mm.bing.net/th/id/R-C.9a864b6b5a4df041d6fddd72b6e12455?rik=ehi3u30l1%2fPx%2fQ&riu=http%3a%2f%2fwww.w3schools.cn%2fwp-content%2fuploads%2fc%2fc-logo.png&ehk=ZIVUd12vPYpOwaMUCTzsLkK8aukj5cnzsRADTdxoKfM%3d&risl=&pid=ImgRaw&r=0" alt="C语言图标" width="150" style="border-radius: 50%; box-shadow: 0 4px 8px rgba(0,0,0,0.2);">
</div>

## 🚀 课程特色
- **零基础直达进阶**：从"Hello World"到指针/数据结构  
- **实战驱动学习**：每课配套编程练习与项目  

## 🎯 今日精选
```c
/*  用格里高利公式计算π的近似值，精度要求：最后一项的绝对值小于给定精度eps  */
#include <stdio.h>
#include <math.h>        		/* 程序中调用绝对值函数 fabs()，需包含 math.h */
int main(void)
{
    int denominator, flag, i; 
    double eps, item, pi;        /* pi 用于存放累加和 */

    printf("Enter eps:");   		/* 提示输入精度eps */
    scanf ("%lf", &eps);

    /* 循环初始化 */
    i = 1;              		/* i 表示当前的项数 */
    flag = 1;              		/* flag 表示第 i 项的符号，初始为正 */
    denominator = 1;      		/* denominator表示第 i 项的分母，初始为1 */
    item = 1.0;         		/* item 中存放第 i 项的值，初值取第1项的值 */
    pi = 0;                		/* 置累加和 pi 的初值为0 */
    while(fabs(item) >= eps){   /* 当|item| ≥ eps时，执行循环 */
        pi = pi + item;         			/* 累加第 i 项的值 */
        i++;          						/* 项数增1，为下一次循环做准备 */
        flag = -flag;              			/* 改变符号，为下一次循环做准备 */
        denominator = denominator + 2;  	/* 分母递增2 ，为下一次循环做准备 */
        item = flag * 1.0 / denominator; 	/* 计算第i项的值，为下一次循环做准备 */
    }
    pi = pi + item;            	/* 加上最后一项的值 */
    pi = pi * 4;               	/* 循环计算的结果是 pi/4 */
    printf ("pi = %.4f\n", pi);
    printf ("i = %d\n", i); 	/* 此处i的值为最后一项的项数 */

    return 0;
}
```

## 📅 课程安排
| 天次 | 主题                  | 难度 |
|------|-----------------------|------|
| 1    | 绪论、引言、常量变量和数据类型   | ⭐    |
| 2    | 运算符、分支结构            | ⭐⭐  |
| 3    | 循环结构        | ⭐⭐ |
| 4    | 函数          | ⭐⭐⭐ |

## 📌 学习资源
- [C语言官方文档](https://devdocs.io/c/)
- [在线编译器](https://godbolt.org/)
- [C语言在线运行平台](https://www.onlinegdb.com/)

<hr>

<small>✨ 提示：按 `Ctrl+K` 快速搜索课程内容</small>

