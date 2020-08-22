/* @date: 2020-08-15 21:21:39
@功能:

@目的:
了解逗号表达式，从左到右执行，最终表达式的值是最后一项的值
*/


# include <stdio.h>
int main (void)
{
    int i;
    int j=2;
    i = (j++,++j,j+2,j-3); // j-2并没有将运算结果赋给j
    printf("i = %d\n",i);
    return 0;
}