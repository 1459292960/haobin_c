# include <stdio.h>

int main (void)
{
    int * p,q;
    int a[5]={1,2,3,4,5};
    p=a;
    q=&a[0];
    printf("%#X\n",p);
    printf("%#X\n",q);
    return 0;
}