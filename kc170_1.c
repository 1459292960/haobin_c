# include <stdio.h>

int main (void)
{
    char ch = 0x80; // char占一个字节，本质也是用整型（整数）来存储的
    printf("%d\n",ch); // 以十进制输出
    ch=129; // 首先129代表整数，用四个字节表示0000 0000 0000 0000 0000 0000 1000 0001
                    // 当将其赋给char类型的变量时，高三个字节舍去，变成1000 0001，解读成十进制就是一个负数：-127
    printf("%d\n",ch);
    return 0;
}

/*在VScode中的输出：
-128
-127
总结：
已知二进制求十进制：
    如果首位是0，则表明是正整数，按普通方法来求；
    如果首位是1，则表明是负整数。将所有位取反，末尾加1，所得数字就是该负数的绝对值；
    如果全是0，则对应的十进制数字就是零。

*/