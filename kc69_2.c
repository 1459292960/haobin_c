/* @date: 2020-08-14 20:19:21
@功能:
1. 求出1～100之间的奇数之和
2. 求出1～100之间奇数的个数
3. 求出1～100之间奇数的平均值
4. 求出1～100之间偶数之和
@目的:

*/
# include <stdio.h>
int main (void)
{
    int i;
    int sum1=0;
    int sum2=0;
    int j=0;
    float av;
    for (i=1;i<=100;i+=2)
    {
        sum1+=i;
        j+=1;
    }
    printf("1~100之间的奇数之和为: %d\n",sum1);
    printf("j = %d\n",j);
    av =1.0*sum1/j; // 保证平均数av得到正确的小数
    printf("av = %f\n",av);
    for (i=0;i<=100;i+=2) // for默认控制一个语句
    {
        sum2+=i;
    }
    printf("1～100之间偶数之和 ：%d\n",sum2);
    return 0;
}
