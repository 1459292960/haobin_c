/* @date: 2020-08-13 21:25:03
@功能:
将三个数排序
@目的:
训练中间变量的思想
*/

#include <stdio.h>
int main(void)
{
    int a,b,c,t;
    printf("请输入三个数字，以空格分割：");
    scanf("%d %d %d",&a,&b,&c);
    if (a < b)
    {
        t=a;
        a=b;
        b=t;
    }
    if (a<c)
    {
        t=a;
        a=c;
        c=t;
    }
    if (b<c)
    {
        t=b;
        b=c;
        c=t;
    }
    printf("排序后的结果：%d %d %d\n",a,b,c);
    return 0;
}