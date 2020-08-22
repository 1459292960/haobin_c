/* @date: 2020-08-16 20:36:48
@功能:

@目的:
求斐波那契数列
*/


# include <stdio.h>
int main  (void)
{
    int a=1;
    int b=2;
    int n;
    int m;
    int i;
    printf("你想求第几个斐波拉契序列值？");
    scanf("%d",&n);
    if (n ==1)
        m=1;
    else if (n == 2)
        m=2;
    else if(n>2)
        for (i=n-2;i>0;i--)
        {
            m=a+b;
            a=b;
            b=m;

        }
    printf("第%d个斐波那切序列为%d!\n",n,m);
    return 0;
}