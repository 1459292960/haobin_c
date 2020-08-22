/* @date: 2020-08-19 21:29:11
@功能:

@目的:
明白为什么会出错，全局变量作用域：在它下面的函数直至程序结束
*/


# include <stdio.h>

void g(void)
{

    printf("k = %d\n",k);
}
int k=99;
void f(void)
{
    g();
}
int main (void)
{
    f();
    return 0;
}