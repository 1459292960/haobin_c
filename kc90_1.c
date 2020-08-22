/* @date: 2020-08-17 19:32:47
@功能:

@目的:
了解 switch语句用法
*/


#include <stdio.h>
int main (void)
{
    int n;
    printf("你想到那一层去？");
    scanf("%d",&n);
    switch (n)
    {

        case 1: //每一个case相当于一个入口，只要找到入口，就一直往下执行，直至遇到break等语句
            printf("一层开！\n");
            break; // 用来终止switch
        case 2:
            printf("二层开！\n");
            break;
        case 3:
            printf("三层开！\n");
            break;
        default:
            printf("还没盖到这一层！\n");
            break;


    }
    return 0;
}