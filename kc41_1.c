/*************************************************************************
	> File Name: kc41_1.c
	> Author: 
	> Mail: 
	> Created Time: 2020年08月11日 星期二 21时15分00秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{

    int i;
    printf("请输入数字：");
    scanf("%d",&i);
    printf("i = %d",i);
    char ch;
    while ((ch=getchar()) != '\n')
    {
        continue; 
        /* 将上一个非法输入放入ch中，起到清除上一个输入的非法输入的作用，防止损害下一个scanf
*/
    }

    int j;
    scanf("%d",&j);
    printf("j = %d\n",j);
    return 0;
}
