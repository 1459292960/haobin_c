/* @date: 2020-08-24 19:30:27
@功能:

@目的:
多级指针跨函数使用内存
*/


# include <stdio.h>
void f(int ** q)
{
    int i = 10;
    *q=&i; // 相当于 p =&i;
    return ;
}
int main (void)
{
    int * p;
    f(&p);
    printf("%d\n",*p);
    return 0;
}

/*在VScode中的输出：
10
总结：
严格来说，此程序有逻辑错误，f()函数执行完毕，为f()函数分配的空间（形参和局部变量）都被系统释放，应该不可读不可写
*/
