/* @date: 2020-08-22 19:56:23
@功能:

@目的:
指针使用错误范例
*/


# include <stdio.h>
int main (void)
{   
    int * p;
    int * q;
    int i =3;
    p=&i;
     *q=*p; // 本句语法上没有出错，但是*p表示一个以p的内容为地址的变量，该变量不属于本程序控制的范围，有可能会造成系统出问题
    printf("%d\n",*q);

    return 0;
}