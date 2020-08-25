/* @date: 2020-08-25 17:21:57
@功能:
学生管理系统
@目的:
练习结构体使用
*/


# include <stdio.h>
#include <malloc.h>

struct Student 
{
    int age;
    float score;
    char name[100];
};
// 输入
void InputStudent(struct Student * pArr, int len)
{
    int i;
    for (i=0;i<len;i++)
    {
        printf("请输入第%d个学生的信息：\n",i+1);
        printf("name = ");
        scanf("%s",pArr[i].name); // pArr[i].name为一维字符串数组名，代表字符串第一个元素的地址，所以不需要写&pArr[i].name
        printf("age = ");
        scanf("%d",&pArr[i].age);
        printf("score = ");
        scanf("%f",&pArr[i].score);

    }
    return ;
}
// 输出函数
void OutputStudent(struct Student * pstu,int len)
{
    int i;
    for (i=0;i<len;i++)
    {
        printf("第%d个学生的信息：\n",i+1);
        printf("name = %s\n",pstu[i].name); // 字符串的输出，需要是char  * 类型，所以不能写成 *pstu[i].name
        printf("age = %d\n",pstu[i].age);
        printf("score = %f\n",pstu[i].score);
    }
    return ;
}
// 排序
void SortStudent(struct Student * pArr,int len)
{
    int i,j;
    struct Student t;
    for (i=0;i<len-1;i++)
    {
        for (j=0;j<len-1-i;j++)
        {
            if (pArr[j].score<pArr[j+1].score)
            {
                t=pArr[j];
                pArr[j]= pArr[j+1];
                pArr[j+1]=t;
            }
        }
    }
    return ;
}
int main (void)
{
    struct Student * pArr;
    int len;
    printf("请输入学生的个数：");
    printf("len = ");
    scanf("%d",&len);
    pArr = (struct  Student *)malloc(len*sizeof(struct Student)); // 通过动态内存分配的内存空间
    InputStudent(pArr,len); // 使用指针
   
    SortStudent(pArr,len);
    OutputStudent(pArr,len); // 使用指针传递数据，只需要把结构体数组中的第一个元素的首地址传递过去即可，
                                                        // 传递8个字节的地址信息(64位地址总线构成的内存编号)
                                                        // 更快，更节省内存
    return 0;
}

/*在VScode中的输出：

总结：
存在问题：某次没有正确结束程序，会导致VScode异常，输出端把命令当成键盘输入
*/
