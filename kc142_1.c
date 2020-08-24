/* @date: 2020-08-23 21:02:17
@功能:

@目的:
了解malloc函数的使用方法
*/


# include <stdio.h>
# include <malloc.h>

void f(int * q)
{

    *q=200;
    free(q); // 将q所指向的内存释放掉，这行代码会导致第二个printf函数输出有问题
    return ;
}
int main (void)
{
    // 动态分配
    int * p =  (int *)malloc(sizeof(int)); // malloc 表示Memory Allocate （内存分配），返回所指内存第一个字节的地址
                                                                         // 实参sizeof(int)=4，表示请求系统分配4个字节
                                                                         // (int *)表示将返回的第一个字节地址强制转换成int *类型地址，表示分配内存中每个元素是int类型
    *p=10;
    printf("%d\n",*p);
    f(p); 
    printf("%d\n",*p);
    *p=20;  // 将p所指向的内存内容释放掉，但p中仍保存那段内存的第一个字节的地址，仍然指向那段内存中的前四个字节
                    // 但是严格来说，释放之后的内存应该不能读，更不能写
    printf("%d\n",*p);

    return 0;
}

/*在VScode中的输出：
10
0
总结：
动态分配的内存，程序员可以手动将其释放释放完后，该内存内容在本程序不可读，不可写
*/
