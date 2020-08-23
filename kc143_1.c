# include <stdio.h>
# include <malloc.h>

int main(void)
{
    int * pArr;
    int len;
    int i;
    printf("请输入数组的长度：");
    scanf("%d",&len);
    pArr = (int *)malloc(4*len);

    for(i=0;i<len;i++)
    {

        scanf("%d",&pArr[i]);
    } 
    printf("数组的内容为：\n");
    for(i=0;i<len;i++)
        printf("%d\n",pArr[i]);
    return 0;
}