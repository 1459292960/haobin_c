/* @date: 2020-08-17 19:11:53
@功能:
求一元二次方程的解
@目的:
了解do..while用法，主要用在人机交互
*/


# include <stdio.h>
# include <math.h>

int main(void)
{
    float a,b,c,x1,x2;
    double delta;
    char ch;
    do{
    printf("请输入一元二次方程的系数：\n");
    printf("a = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("c = ");
    scanf("%f",&c);
    delta=b*b-4*a*c;
    if (delta > 0)
    {
        x1=(-b+sqrt(delta)) / (2*a);
        x2=(-b-sqrt(delta)) / (2*a);
        printf("方程有两个解，x1 = %f , x2 = %f\n",x1,x2);
    }
    else if (delta == 0)
    {
        x1=-b/(2*a);
        printf("方程有一个解，x1 = x2 = %f\n",x1);
    }
    else
    {
        printf("方程没有实数解!\n");
    }
    printf("你是否继续（Y/N）：");
    scanf("  %c",&ch);

    }while('Y'== ch || 'y' == ch); // "Y"相当于一个字符串，字符串末尾都有一个\0；'Y'是一个字符，两者不等价
   
    
    return 0;
}

/*在VScode中的输出：

总结：
字符与字符串不等价，注意区别!
*/
