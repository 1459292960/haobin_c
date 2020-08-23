/* @date: 2020-08-23 19:56:16
@功能:

@目的:
不同类型的指针变量在内存中占的字节相同
如果cpu有32位地址总线与内存相连，那么指针变量占4个字节；
如果有64位地址总线，那么指针变量占8个字节
*/


#include <stdio.h>

int main(void)
{
    int i;
    char ch;
    double x;
    int * p;
    char * q ;
    double * r;
    p=&i;
    q=&ch;
    r=&x;
    printf("%ld %ld %ld\n",sizeof(p),sizeof(q),sizeof(r));
    return 0;
}

/*在VScode中的输出：
8 8 8
总结：
我的电脑是64位的，意思是有64根地址总线，那么每个地址的编号要用64个0/1来表示，存储的话占8个字节（每个 字节8位）
*/
