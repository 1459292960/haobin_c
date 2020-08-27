# include<stdio.h>

int main (void)
{
    int x;
    int y;
    scanf("%d",&x);
    if (x>=0) // if 整体是一个语句
        if (x>0)
            y=1;
        else    // else 和离它最近的if配对
            y=0;
    printf("y = %d\n",y);
    return 0;
}