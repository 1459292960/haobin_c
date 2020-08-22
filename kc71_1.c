/* @date: 2020-08-14 21:08:09
@功能:
求1+1/2+...+1/100之和
@目的:
强制类型转换
*/


# include <stdio.h>
int main (void)
{
    int i;
    float sum=0; // 求和sum 要先赋0
    for (i=1;i<=100;i++) // 更新部分最好不要定义成浮点型，因为浮点型变量在计算机中不能保证被准确存储
    {
        sum+=1.0/i; 

    }
    printf("i = %d\n",i); 
    printf("sum = %f\n",sum);  // 单精度的float类型sum输出必须用%f 或者 %lf，否则解码错误导致输出结果不正确
    printf("%f\n",(float)(5)); // 强制类型转换
    printf("%lf\n",(double)(5));
    return 0;
}

/*在VScode中的输出：
i = 101
sum = 5.187378
5.000000
5.000000
总结：
一般而言，编程中使用float够用
*/
