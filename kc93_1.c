# include <stdio.h>
int main(void)
{
    int i;
    int j;
    scanf("%d",&i);
    printf("i = %d\n",i);
    char ch;
    while (ch = getchar() != '\n')
        continue;
    scanf("%d",&j);
    printf("j = %d\n",j);
    return 0;
}