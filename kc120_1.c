/* @date: 2020-08-19 21:24:37
@功能:

@目的:
了解全局变量和局部变量冲突时，局部变量可以屏蔽掉同名的全局变量
*/


# include <stdio.h>
int i=88;
void f(int i) // 形参为局部变量，可以屏蔽掉同名的全局变量
{
    printf("i = %d\n",i); 
}
int main(void)
{
    int i;
    f(8);
    return 0;
}

/*在VScode中的输出：
i = 8
总结：

*/
