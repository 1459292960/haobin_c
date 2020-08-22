/* @date: 2020-08-13 20:01:14
@功能:

@目的:
明白此时为哈会出错
*/

# include <stdio.h>
int main(void)
{
    double delta =3.0;
    if (delta > 0 )
        printf("There are two eigen values.");
    printf("HAHAHA");
    else if  (delta  ==  0)
        printf("There is one eigen value.\n");
    else
    {
        printf("There is no eigen value.\n");
    }
    
    return 0;
}