/* @date: 2020-08-17 20:26:56
@功能:

@目的:
break用于for循环内部的if语句，会终止for循环，而不是if语句
*/


# include <stdio.h>
int main(void)
{
    int i;
    for (i=0;i<3;i++)
    {
        if (3>2)
            break;
        printf("嘻嘻！\n");
    }
    return 0;
}