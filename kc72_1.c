/* @date: 2020-08-15 19:58:54
@功能:
测试float类型变量在计算机是否能准确存储
@目的:

*/


# include <stdio.h>
int main (void)
{
    float i;
    int j=1;
    int k=2e31-1;
    printf("k  = %d\n",k);
    printf("k 有%ld个字节\n",sizeof(k));

     for (i=1.0;i<2e31-1;i++)
    {
        if (i>j)
        printf("i = %f\n",i);
        j++;

    } 
    return 0;
}

/*在VScode中的输出：

总结：
还没有准确试出
*/
