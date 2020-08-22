/* @date: 2020-08-18 19:07:43
@功能:

@目的:
认识二维数组
*/


# include <stdio.h>
int main (void)
{
    int a[2][3]={
        {1,2,3},
        {4,5,6}
    };
    int i,j;
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%-5d",a[i][j]); //-5表示左对齐，每个输出占5个字符的宽度
        }
        printf("\n");
    }
    return 0;
}

/*在VScode中的输出：
1    2    3    
4    5    6 
总结：
a[i][j]代表第i+1行第j+1列的元素
*/
