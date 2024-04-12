/**
 * 认识C
*/
#include <stdio.h>
// 函数返回两个数的最大公约数
int getGCM(int a, int b)
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void main()
{
    int i,j;
    printf("输入两个数，用空格隔开:");
    scanf("%d%d",&i,&j);
    printf("最大公约数为%d\n",getGCM(i,j));
}