/**
 * ��ʶC
*/
#include <stdio.h>
// �������������������Լ��
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
    printf("�������������ÿո����:");
    scanf("%d%d",&i,&j);
    printf("���Լ��Ϊ%d\n",getGCM(i,j));
}