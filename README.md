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
WEEK07
# 比較 int 整數 及 long long int 很長很長的整數 的差別
```cpp
#include <stdio.h>
int main()
{
   int n=9876543210;
   printf("int ¦L¥X¨Ó %d\n", n);

   long long int a=9876543210;
   printf("long long int ¦L¥X¨Ó %lld\n", a);

}
```
# 用 long long int 很長很長的整數 來計算最大公因數
```cpp
#include <stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    long long int ans;
    for( long long int i=1; i<=a; i++){
        if (a%i==0 && b%i==0) ans=i;
    }
    printf("最大公因數是:%lld\n", ans);

}
```
# 輾轉相除法 來計算最大公因數
```cpp
#include <stdio.h>
int main()
{
    long long int a, b, c;
    scanf("%lld %lld", &a, &b);
    while(1){
        c = a % b;
        printf("a:%lld b:%lld c:%lld\n", a, b, c);
        if( c==0 ) break;
        a = b;
        b = c;
    }
    printf("答案是 : %lld\n",b);
}
```
# 利用「剝皮」的技巧。可以從高位數來剝
‵``cpp
#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);

  printf("瞷计:%d\n", n%10);
  n = n/10;

  printf("瞷计:%d\n", n%10);
  n = n/10;

  printf("瞷计:%d\n", n%10);
  n = n/10;

  printf("瞷计:%d\n", n%10);
  n = n/10;

  printf("瞷计:%d\n", n%10);
  n = n/10;

  printf("瞷计:%d\n", n%10);
  n = n/10;

  printf("瞷计:%d\n", n%10);
  n = n/10;

  printf("瞷计:%d\n", n%10);
  n = n/10;

  printf("瞷计:%d\n", n%10);
  n = n/10;

  printf("瞷计:%d\n", n%10);
  n = n/10;

}
```
#判斷1個質數
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int bad=0;
    for(int i=2;i<n;i++){

        if( n%i==0 ) bad=1;
    }
    if(bad==0)printf("%d是質數",n);
    else printf("%d不好,不是質數",n);
}
```
#-第07週實習課堂作業-列出質數
```cpp
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    for(int n=2;n<=a;n++){

       int bad=0;
       for(int i=2;i<n;i++){
           if( n%i==0 ) bad=1;
       }
       if(bad==0)printf("%d ",n);

   }
}
```
#輸入5個數字, 把它們加起來
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入5個數字(要加起來): ");
    int n;

    int sum=0;
    for(int i=0;i<5;i++){
        scanf("%d",&n);
        sum+= n;
    }
    printf("總和是:%d",sum);
}

```
#利用for寫出直角三角形
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

       for(int k=1;k<=n-i;k++) printf(" ");

       for(int k=1;k<=i;k++) printf("*");

       printf("\n");
    }
}
```
#用2個for迴圈來寫出直角三角形
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
       for(int k=1;k<=n;k++){
           if(k<=n-i)printf(" ");
           else     printf("*");
       }
       printf("\n");
    }
}

```
#用2個while迴圈, 畫出有空格、有星星的右方直角三角形
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int i=1;
    while(i<=n){

        int k=1;
        while(k<=n){

           if(k<=(n-i))printf(" ");
           else printf("*");

           k++;
        }
        printf("\n");
        i++;
    }
}
```


