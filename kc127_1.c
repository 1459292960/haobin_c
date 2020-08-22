/* @date: 2020-08-21 20:48:52
@功能:

@目的:
利用指针互换两个变量的值
*/


# include <stdio.h>
void huhuan(int *,int *); //前置申明，一般不写形参名。int *  类型代表存放整形变量的地址的类型
int main (void)
{
    int a=3; // 函数内定义的变量为局部变量
    int b=5;
    huhuan(&a,&b); // huhuan()函数接收两个地址，所以这里需要取地址符
    printf("a=%d,b= %d\n",a,b);
    return 0;
}
void huhuan(int * p,int * q) // 形参名字是p,q
{

    int t;
    t=*p;
    *p=*q;
    *q=t;
    return;
}

/*在VScode中的输出：
a=5,b= 3
总结：

*/
