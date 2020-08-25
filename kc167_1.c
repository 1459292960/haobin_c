/* @date: 2020-08-25 19:22:10
@功能:

@目的:
进制转换
*/


# include <stdio.h>

int main (void)
{
    int i=1000;
    int j=010; // 前面以0开头，表示8进制
    printf("%X\n",i);
    printf("%#X\n",i); // %#X以十六进制输出 
    printf("%o\n",i); // %o以八进制形式输出
    printf("%o\n",j);
    printf("%d\n",j);
    return 0;
}

/*在VScode中的输出：

总结：
r进制转10进制，按每位权重依次乘开；10进制转r进制，依次除r取余，余数倒序排序
*/
