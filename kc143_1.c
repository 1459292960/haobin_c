/* @date: 2020-08-24 18:28:35
@功能:

@目的:
构造动态数组的方法
*/


# include <stdio.h>
# include <malloc.h>

int main(void)
{
    int * pArr; // 定一个一个变量名为pArr的变量，变量类型为int * 类型，表明pArr可以存放整形变量的地址
    int len;
    int i;
    printf("请输入数组的长度：");
    scanf("%d",&len);
    pArr = (int *)malloc(4*len);  // 使用malloc方法，向系统申请4*len个字节的内存空间，
                                                            // malloc函数返回所申请的内存空间第一个字节的地址
                                                            // int * 表示将所返回的第一个字节的地址强制转换成int变量类型的地址，
                                                            // 这样pArr指向前四个字节；pArr+1指向接下来的四个字节
// 给数组赋值
    for(i=0;i<len;i++)
    {

        scanf("%d",&pArr[i]); // pArr[i] 等价于 *（pArr+i），代表所构造的动态数组中的第i个元素
    } 
    printf("数组的内容为：\n");
    // 输出数组内容
    for(i=0;i<len;i++)
        printf("%d\n",pArr[i]);
    return 0;
}

/*在VScode中的输出：
10
0
20
总结：

*/
