/* @date: 2020-08-18 20:04:48
@功能:

@目的:
熟悉return的作用
*/


# include <stdio.h>
void f(void)
{
    int i;
    for (i=0;i<3;i++)
    {

        printf("同志们好！\n");
        return; // return用来终止函数，而break用来终止循环和switch
    }
    printf("同志们辛苦了！\n");
}
int main(void)
{
    f();
    return 0;
}

/*在VScode中的输出：
10.000000
总结：

*/
