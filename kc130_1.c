/* @date: 2020-08-22 20:21:05
@功能:

@目的:
通过指针可以修改/返回一个以上的值
*/


# include <stdio.h>
void g(int * p,int *q)
{

    *p=2;
    *q=4;
    return ;
}
int main (void)
{
    int a=3;
    int b=5;
    g(&a,&b);
    printf("a = %d,b = %d\n",a,b);
    return 0;
}