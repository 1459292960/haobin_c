# include <stdio.h>

int main(void)
{
    int k;
    for (k=2;k<6;k++,k++) // 逗号表达式，从左至右执行，最终表达式的值是最后一项的值
        printf("##%d",k);
    return 0;
}