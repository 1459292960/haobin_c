/* @date: 2020-08-18 19:56:10
@功能:

@目的:
熟悉函数返回值
*/


# include <stdio.h>
int f(void) //函数返回值类型以函数名前的类型为准
{

    return 10.5;  // 函数返回值为int,所以只能返回10
}
int main (void)
{
    float i;
    i=f();
    printf("%f\n",i);
    return 0;
}

/*在VScode中的输出：
10.000000
总结：

*/
