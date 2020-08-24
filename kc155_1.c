/* @date: 2020-08-24 21:09:11
@功能:

@目的:
取出结构体变量中的成员
*/


# include <stdio.h>

struct student
{
    int age;
    float score;
    char sex;
};
int main (void)
{
    struct student st = {10,99.9f,'F'}; // 99.9f或者99.9F表示float类型的数据，而C语言中默认99.9为double类型的数据
    struct student * pst; // 定义了struct student *类型的指针变量pst，它只能存储struct student类型变量的地址
                                            // 指针变量本身占几个字节，与地址总线的个数有关，例如32根地址总线，
                                            // 那么内存中的地址编号要用32个1/0来表示，那么就需要4个字节来存储，即指针变量占4个字节
    pst =&st;
    pst->age=18; // 相当于 (*pst).age
    st.score = 66.6;
    printf("%d %f\n",st.age,pst->score); 

    return 0;
}

/*在VScode中的输出：
18 66.599998
总结：

*/
