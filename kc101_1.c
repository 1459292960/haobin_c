/* @date: 2020-08-18 19:02:29
@功能:

@目的:
认识一维数组，复制，赋值
*/


# include <stdio.h>
int main (void)
{  
    int a[5]={1,2,3,4,5}; // 只有在定义时可以写a[5]，最大只有a[4]
    int b[5];
    int i;

    // b=a; // 一维数组名称代表数组第一个元素的地址
    for (i=0;i<5;i++) // for默认控制一个语句
    {   b[i]=a[i];
        printf("%d\n",b[i]);
    }
        
            return 0;
}