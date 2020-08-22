/* @date: 2020-08-16 19:59:27
@功能:

@目的:
熟悉while语句的用法。
*/


# include <stdio.h>
int main (void)
{
    int i;
    int sum=0;
    printf("请输入一个数字：");
    scanf("%d",&i);
    int m;
    m = i; // while循环初始化

    // for(m+i;m; m/=10)
    // {
    //     sum = sum*10+m%10;
    // }
    
    while(m) // while循环判断条件
    {
        sum = sum*10+m%10; // 循环执行语句
        m/=10; // while 循环语句判断条件更新

    }
    if (sum == i)
    printf("%d是回文数!\n",i);
    else
    {
        printf("%d不是回文数！\n",i);
    }
    
    return 0;
}

/*在VScode中的输出：

总结：
推荐使用for，因为逻辑更清晰。
*/
