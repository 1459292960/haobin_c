/* @date: 2020-08-18 20:56:34
@功能:

@目的:
判断一个数是不是素数
*/


# include <stdio.h>
# include<stdbool.h> // 部分编译器没有bool头文件，需要导入

bool IsPrime(int val) //判断一个数是不是素数
{

    int i;
    for (i=2;i<val;i++)
    {
        if (val%i == 0)
            break;
    }
    if (i == val)
        return true;
    else
    {
        return false;
    }
    
}
int main (void)
{
    int val; // val函数内部变量，只在函数内部使用
    scanf("%d",&val);
    if (IsPrime(val))
        printf("Yes!\n");
    else 
        printf("No!\n");
    return 0;
}