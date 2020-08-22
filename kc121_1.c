/* @date: 2020-08-21 19:27:38
@功能:

@目的:
初步了解指针
*/


# include <stdio.h>
int main (void)
{
    int * p; // 定义了int * 类型（存放int 变量地址的类型）的变量p，p是变量名，p是一个指针变量
    int i=2;
    int j;
    p=&i;
    j=*p; // *p等同于i
    printf("i = %d,j =%d\n",i,j);
    return 0;
}
/*在VScode中的输出：
i = 2,j =2
总结：
指针就是地址，地址就是指针。指针变量是存放地址的变量
*/
