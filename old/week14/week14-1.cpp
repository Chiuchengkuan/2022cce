#include <stdio.h>
int sum( int a ,int b ); ///宣告declare

int main()
{///再用之前要先宣告declare 或定義declare
    int ans = sum(2,3);///使用 呼叫
    printf("ana: %d\n", ans);
}

int sum( int a ,int b )///定義define
{
    return a + b;
}///回傳 回覆人家

