/* @date: 2020-08-13 21:10:36
@功能:
求出三个数中的最大值
@目的:

*/
# include <stdio.h>
int main(void)
{
    int max,a,b,c;
    printf("请输入三个数字，以空格分割：");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
        max=a; // if默认控制一条语句
    else
    {
        max=b;
    }
    if (max>c)
        ; // 空语句
    else
    {
        max=c;
    }
    printf("最大的数为：%d\n",max);
    
    return 0;
}