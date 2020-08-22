/* @date: 2020-08-18 21:10:38
@功能:

@目的:
认识float存储数据的不准确性；return 返回值
*/


#include <stdio.h>
int f(void) // 返回类型以函数名前的为准
{
    return 10.9;
}
int main (void)
{
    float i=99.9; // float浮点型变量在内存中不能保证准确存储
    printf("%f\n",i);
    i=f();
    printf("%f\n",i);
    return 0;
}

/*在VScode中的输出：
99.900002
10.000000
总结：

*/
