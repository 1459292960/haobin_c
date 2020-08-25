# include <stdio.h>

int main (void)
{
    int i=0xFFFFFFEF; // 前面是0（零）而不是字母o
    int j=0xFFFFFFCA;

    printf("%d\n",i);
    printf("%d\n",j);
    return 0;
}

/*在VScode中的输出：
-17
-54
总结：

*/
