/**
 * ����ṹ
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
    printf("����������");
    scanf("%d%d",&i,&j);
    printf("����ǣ�%d\n",sum(i,j));
    printf("����ǣ�%f\n",root(i,j));
}