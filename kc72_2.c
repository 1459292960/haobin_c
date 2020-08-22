/* @date: 2020-08-15 20:14:22
@功能:
判断一个浮点型变量x是否为零
@目的:

*/


# include <stdio.h>
# include <math.h>

int main (void)
{
    float x;
    int i = fabs(-1);
    printf("%d\n",i);
    if ( fabs(x-0.000001) <= 0.000001) // 此处使用abs会出现警告，因为abs是对整数求绝对值；fabs对float\double类型求绝对值
        printf("x 是零！\n");
    else
    {
        printf("x 不是零! \n");
    }
    

    return 0;
}