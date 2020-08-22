/* @date: 2020-08-13 20:04:15
@功能:
根据分数评定等级
@目的:
测试 if ... else if ... 
*/
# include <stdio.h>
int main(void)
{
    printf("请输入分数（0～100）：");
    int a;
    scanf("%d",&a);
    if (a<0 || a>100)
    {
        printf("输入分数有误，请重新输入：");  // if ... else if ... else if ... else ...语句只会执行一种情况的，当执行了输入错误的，就不再会对新输入的值再次判断 
        scanf("%d",&a);

    }
    if (a<=100 && a>90)  // 解决的方法是，重新定义if语句
        printf("优秀\n");
    else if (a>80)
        printf("良好\n");
    else if (a>60)
        printf("及格\n");
    else
    {
        printf("不及格\n");
    }
    

    return 0;
}