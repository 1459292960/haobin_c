/* @date: 2020-08-24 19:47:51
@功能:

@目的:
动态内存可以跨函数使用，可以使得程序的功能更加强大
*/


# include <stdio.h>
# include <malloc.h>

void f(int ** q)
{
    *q=(int *)malloc(sizeof(int)); // *q 等价于 p，即 p=(int *)malloc(sizeof(int)); 构造了一个动态数组
                                                                // sizeof(int)，在不同的机器上运行得到的结果可能不同，
                                                                // 原因在于C语言对于int类型的变量占几个字节没有硬性规定
    **q=5; // **q 等价于 *p
    // *q = 5; // error 相当于 p=5; 而p是int *类型
    return ;
}
int main (void)
{
    int * p;
    f(&p); // 执行完f()函数，p执行了一个合法的整形单元，意思是p指向的内存单元没有被释放掉
    printf("%d\n",*p);
    return 0;
}