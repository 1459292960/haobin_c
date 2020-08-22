# include <stdio.h>
int main(void)
{
    int x=1;
    int y=2;
    int a=0;
    int b=0; 
    switch (x)
    {
        case 1:
            switch (y)
            {

                case 1:
                    a++;
                    break;
                case 2:
                    a=100;
                    break; // break终止离它最近的switch

            }
            b=100;
            break;
    }
    printf("a = %d, b =%d\n",a,b);
    return 0;
}