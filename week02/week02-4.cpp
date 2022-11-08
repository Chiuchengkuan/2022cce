#include<stdio.h>
int main()
{
    int a,b;
    a=2;
    printf("請用鍵盤輸入兩個整數:");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("你讀入了%d %d \n", a, b);
    printf("它加起來是: %d \n", a+b);
}

