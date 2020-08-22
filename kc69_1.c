/* @date: 2020-08-14 20:05:49
@功能:
求出1～100之间能被3整除的数之和
@目的:
掌握流程控制
*/

# include <stdio.h>
int main (void)
{
    int i;
    int sum=0;
    for (i=1;i<=100;i++)
    {
        if (i%3 == 0)
        {
            sum+=i;
        }

    }
    printf("sum = %d\n",sum);
    return 0;
}