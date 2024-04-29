/***
 * C语言内置数据类型
 * -基本类型
 *      -整型
 *          -短整型 short int
 *          -基本整型 int
 *          -长整型 long int
 *      -浮点型
 *          -单精度 float
 *          -双精度 double
 *          -长双精度 long double
 *      -字符型 char
 *      -空类型 void
 * -构造类型
 *      -数组 []
 *      -结构体 struct
 *      -共用体 union
 *      -枚举类型 enum
 * -指针类型 *
*/
#include <stdio.h>
int main()
{
    int i,j;
    char c1,c2;
    c1='a';
    c2=98;
    i='A';
    j=66;
    printf("i=%d,j=%d,c1=%c,c2=%c\n",i,j,c1,c2);
    printf("c1-32=%c\n",c1-32);
    return 0;
}
/*
18      //十进制表示
022     //八进制表示
0x12    //十六进制表示

0           //signed int
168         //signed int
168U        //unsigned int
2147483647  //signed long
-1L         //signed long
65535Lu     //unsigned long

*/