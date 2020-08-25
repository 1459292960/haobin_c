# include <stdio.h>
// 定义了一个枚举类型
enum Weekday
{
    Monday,Tuesday,Wendnesday,Thursday,Friday,Saturday,Sunday
};
int main (void)
{
    enum Weekday day;
    day =Monday; // 枚举中，第一个值本质是0，但不可写成 day = 0;
    printf("%d\n",day); // 

    return 0;
}