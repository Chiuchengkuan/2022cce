# 2022cce
# 利用2層迴圈, 畫出「用星星畫倒過來的三角形」
```cpp
#include <stdio.h>
int main()
{
    for (int i=5; i>0; i--)
    {
        for (int j=0; j<i; j++)
        {
            printf("*");
        }

        printf("i :%d星星\n",i);
    }
}
```
# 利用2層迴圈, 畫出「用星星畫出等腰三角形」注意空格
```cpp
#include <stdio.h>
int main()
{
    for (int i=1; i<=5; i++)
    {
        int space=5-i, star=2*i-1;
        for (int k=0; k<space; k++)
            printf(" ");
        for (int k=0; k<star; k++)
            printf("*");
        printf("\n");
    }

}
```
# 使用 1個for迴圈 for(int i=1; i<=a; i++) 去試a,b的數, 這個數 i 如果可以兩個都整除 if(a%i==0 && b%i==0),及找到答案了 ans = i
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個整數,要約分: ");
    int a, b;
    scanf("%d %d",&a,&b);
    int ans;
    for (int i=1; i<=a; i++)
    {
        if (a%i==0 && b%i==0)
        {
            ans=i;
        }
    }
    printf("ans: %d 可約分",ans);
}
```
# 利用「輾轉相除法」可以找最大公因數
```cpp
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d",&a,&b);
    while(1)
    {
        c =a%b;
        printf("老大:%d 老二:%d 老三:%d\n", a, b, c);
        if( c==0 ) break;
        a=b;
        b=c;
    }
    printf("答案b :%d",b);

}
```
