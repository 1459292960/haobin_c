/* @date: 2020-08-14 19:54:50
@功能:
求1～10000之间奇数的和
@目的:
验证for语句执行的顺序
*/

# include <stdio.h>
int main (void)
{
    int i;
    int sum=0;
    for(i=1;i<10000;i+=2) // 执行顺序1243 ，243,...243
    {
        sum= sum+i;

    }
    printf("sum = %d\n",sum);
    printf("i = %d\n",i);
    return 0;
}

/*在VScode中的输出：
sum = 25000000
i = 10001
总结：
循环让程序变得更简洁!
*/
