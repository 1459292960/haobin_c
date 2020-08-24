/* @date: 2020-08-24 19:04:27
@功能:

@目的:
多级指针
*/


# include <stdio.h>

int main (void)
{
    int i ;
    int * p;
    int ** q;
    int *** r;
    r=&q;
    // r=&p; // r 是int *** 类型， 只能存放 int ** 类型指针变量的地址 
    return 0;
}