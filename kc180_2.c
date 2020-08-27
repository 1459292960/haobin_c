# include <stdio.h>

int main (void)
{
    int i=1;
    printf("%d %d %d\n",i++,++i,i);  // 逗号使++立即生效
    return 0
    ;
}

/*在VScode中的输出：
2 3 3
总结：
合格的程序员应该屏蔽掉前自增和后自增的区别
*/
