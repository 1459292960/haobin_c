/* @date: 2020-08-25 16:21:27
@功能:
冒泡法排序
@目的:

*/


# include <stdio.h>
void sort(int * pArr,int len)
{
    int i,j,t;
    for (i=0;i<len-1;i++)
    {
        for (j=0;j<len-1-i;j++)
        {
            if (pArr[j]<pArr[j+1]) // > 为升序；<为降序
            {
                t=pArr[j];
                pArr[j]=pArr[j+1];
                pArr[j+1]=t;
            }
        }
    }
    return;
}
int main (void)
{
    int a[6]={1,0,2,5,3,9};
    int i;
    sort(a,6); // 一维数组的数组名代表数组第一个元素的首字节的地址，a为指针常量
    for (i=0;i<6;i++)
        printf("%d ",a[i]);
    return 0;
}

/*在VScode中的输出：

总结：
看懂程序：1.流程控制 2. 试数
*/
