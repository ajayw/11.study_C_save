/**
 * 程序结构
*/
#include <stdio.h>
#include <math.h>
double root(double x,double y)
{
    if(x>y) return sqrt(x-y);
    else return 0;
}

int sum(int a,int b)
{
    int sum;
    sum = a + b;
    return sum;
}
void main()
{
    int i,j;
    printf("输入两个数");
    scanf("%d%d",&i,&j);
    printf("结果是：%d\n",sum(i,j));
    printf("结果是：%f\n",root(i,j));
}