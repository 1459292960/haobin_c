
# include <stdio.h>
int main (void)
{
    int i;
    int j;
    for (i=0;i<3;i++) // for默认控制一个语句，若想要控制多个语句，需要用括号括起来
        for (j=2;j<5;j++)
            printf("哈哈！\n");
    printf("嘻嘻！\n");
    return 0;
}