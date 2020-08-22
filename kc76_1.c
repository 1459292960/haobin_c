/* @date: 2020-08-15 21:02:42
@功能:
前自增/后自增
@目的:

*/


# include <stdio.h>
int main (void)
{
    int i=3;
    int j=3;
    int k;
    int m;
    k=i++; //后自增整体表达式的值为j+1之前的值
    m=++j; //前自增整体表达式的值为j+1之后的值
    printf("i = %d, j = %d, k = %d, m = %d \n",i,j,k,m);
    return 0;
}

/*在VScode中的输出：
i = 4, j = 4, k = 3, m = 4
总结：

*/
