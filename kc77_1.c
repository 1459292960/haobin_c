/* @date: 2020-08-15 21:15:57
@功能:

@目的:
熟悉三目运算符的含义，不推荐使用
*/


# include <stdio.h>
int main(void)
{
    int i;
    i = (2>2?5:1); 
    /*
    三目运算符，相当于
    if (2>2)
    {
        i = 5;
    }
    else
    i = 1;
    */
    printf("i = %d\n",i);
    return 0;
}