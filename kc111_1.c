# include <stdio.h>
void max1(int i, int j) // 将最大值找到并输出
{
    if (i>j)
        printf("%d\n",i);
    else 
        printf("%d\n",j);
}
int max2(int i,int j) // 将最大值找到并返回，推荐使用
{
    if (i>j)
        return i;
    else
    {
        return j;
    }
    
}
int main(void)
{
    int a=1,b=2,c=3,d=4,e=5,f=6;
    
    max1(a,b);
    max1(c,d);
    max1(e,f);
    printf("%d\n",max2(a,b));
    return 0;
}