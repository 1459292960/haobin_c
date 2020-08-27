# include <stdio.h>

int main (void)
{
    int i=3;
    int k= i<<3; // 左移n位,相当于乘以2的n次方
    int p=i*8; // 相比较上面的左移操作来说，速度较慢
    printf("%d\n",k);

    printf("%d\n",p);

    int j=12;
    k=j>>2; // 右移n位，相当于除于2的n次方
    printf("%d\n",k);
    return 0;
}

/*在VScode中的输出：
24
24
总结：

*/
