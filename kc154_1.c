/* @date: 2020-08-24 20:37:39
@功能:

@目的:
结构体变量初始化及赋值
*/


#include <stdio.h>
// 定义结构体（复合数据类型），定义了一个新的数据类型，并没有定义变量
struct Student 
{

    int age;
    float score;
    char sex;
}; // 注意这里不能省略分号，否则会报错  expected ‘;’, identifier or ‘(’ before ‘int’
int main(void)
{
    struct Student st =  {14,100,'M'}; // 定义了结构体变量，并赋初值
    struct Student st2 ; //
   //  st2 = {12,90,'F'};  // error 相当于数组定义完之后，不能再整体赋值
    st2.age = 12;
    st2.score=90;
    st2.sex = 'F'; // 单个字符用单引号
    printf("%d %f %c\n",st.age,st.score,st.sex);
    printf("%d %f %c\n",st2.age,st2.score,st2.sex);
    return 0;
}

/*在VScode中的输出：
14 100.000000 M
12 90.000000 F
总结：

*/
