/* @date: 2020-08-19 20:22:36
@功能:
将1～某个数之间所有的素数都找到并输出
@目的:
函数功能应该尽可能单一，以提高利用率；
*/


# include <stdio.h>
# include <stdbool.h>
// 判断某个数是不是素数
bool IsPrime(int val)
{
    int i;
    for (i=2;i<val;i++)
    {
        if (0 == val%i)
            break;
    }
    if(i == val)
        return true;
    else
    {
        return false;
    }
    
}
// 找出1～m之间的素数并输出
void TraverseVal(int m) 
{
    int i;
    for (i=2;i<=m;i++)
        if (IsPrime(i))
            printf("%d\n",i);
}
int main (void)
{
    int val;
    scanf("%d",&val);
    TraverseVal(val);
    return 0;
}

/*在VScode中的输出：

总结：
多学习，多模仿牛人的代码
*/
