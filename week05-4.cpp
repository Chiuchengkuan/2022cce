#include <stdio.h>
int main()
{
    for (int i=0; i<3; i++)   ///012
    {
        printf("迴圈(電腦習慣)是i是%d\n", i);
    }
    for (int i=1; i<3; i++)    ///123
    {
        printf("迴圈(人類習慣)是i是%d\n", i);
    }
    for (int a=3; a>0; a--)    ///321
    {
        printf("倒過來的迴圈a是%d\n", a);
    }

}
