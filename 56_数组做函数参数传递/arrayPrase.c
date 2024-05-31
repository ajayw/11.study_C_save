/**
 * [一维数组元素作为实参使用]
 * x=func(A[2],-10);
 * 
 * 数组不可以作为函数的返回类型，也就是函数返回不了一个数组
 * 但是可以作为形参
 * double average(double A[100],int n)
 * {
 *  //函数体
 * }
 * 在调用时相应地要用数组对象，而不能用元素作为实参来调用
 * double x,y,A[100],B[2][100];
 * x=average(y, 100);//错误，double不能对应double数组 
 * x=average(A[10],100);   //错误，double元素不能对应double数组  
 * x=average(A,100);       //正确，double数组对应double数组 
 * x=average(B[1],100);    //正确，double数组对应double数组
 * 
*/
/**
 * [数组函数调用栈]
 * 数组实参调用的方式是数组的地址，，本质上是将这个数组首地址（一个数值），
 * 像变量实参那样传递到形参中，十六进制方式，ox23bc21
 * 
 * 
*/
void fun(int A[5],int n)
{
    A[1]=100;
    n=10;
}
void caller()
{
    int a[5]={1,2,3,4,5},x=5;
    fun(a,x);
}

/**
 * [比较二维数组最大值]
 * 令max为元素最大值，采用枚举法逐一比较二维数组中的每一个元素
A[i][j]和max，若A[i][j]大于max说明有一个更大的值出现，则令
max=A[i][j]且记录r=i和c=j，遍历完所有元素，则A[r][c]就是最大的元素
由于max必然是数组中的一个元素值，且先比较才有max=A[i][j]，故设
置max的初值为A中一个元素值，例如A[0][0]。
由于函数需要返回最大元素值及下标行、列三个数据，而函数返回只能
是一个数据，所以使用数组B传递到函数中，将下标行、列值“带回”
 * 
 * 形参中数组定义长度无意义，要看实参的输入数组长度决定。
 * 
*/
#include<stdio.h>
int findmax(int A[3][4],int B[2])
{
    int i,j,max,r=0,c=0;
    max=A[r][c]; //max初值设为A[0][0]
    for (i=0; i<3; i++) //枚举二维数组所有元素
        for (j=0; j<4; j++)
            if (A[i][j]>max) {
                r=i,c=j;//记录此时的下标
                max = A[r][c];//新的最大元素值:
            }
    B[0]=r,B[1]=c; //下标行、列通过B数组返回到主调函数中
    return max; //最大值通过函数值返回到主调函数中
}
int main()
{

}
/**
 * [求平均数]
 * 
*/

double average(double A[],int n)//n为元素个数
{
    int i ;double s=0;
    for(i=0;i<n;i++) s=s+A[i];
    return n!=0?s/n:0.0;
}
int main()
{
    double A[3]={1,2,3};
    printf("A=%lf\n",average(A,3));//传入数组，及个数，或者sizeof A/sizeof(int)

}
//编译器对不同类型数组不做隐式类型转换
/**
 * [大数类型接口设计]
 * 数据的大小超出范围时如何运算，
 * 3333333333333333333333333+2222222222222222222222
 * C语言默认数据类型不支持超大数计算，需要构造
 * int A[N];大数类型
 * A[0]存放大数最高位下标偏移值
 * A[1]存放大数符号，1为正，-1为负
 * A[2]存放个位，A[3]存十位，……
 * 
 * scanf/printf不支持大数输入输出，考虑使用 【字符数组】
 * %s格式
 * 设计字符数组形式转换函数
 * void str2big(char s[],int A[]);
 * void int2big(int n,int A[]);
 * 
 * 大数输出输入
 * void print(int A[]);
 * void scan(int A[]);
 * 
 * void assign(int A[],int B[]);//赋值
 * void zerojustify(int A[]);//调整高位无意义0
 * int compare(int A[],int B[]);//大数比较,A大于B返回0，返回1
 * 
 * 
 * 
*/
//设计“大数类型”的加、减、乘、除四则运算函数。
void Add(int A[],int B[],int R[]);//大数加法R=A+B
void Sub(int A[],int B[],int R[]);//大数减法R=A-B
void Mul(int A[],int B[],int R[]);//大数乘法R=AxB
void Div(int A[],int B[],int R[]); //大数除法R=A/B

//第57节有四个函数的实现方式

/**
 * [高精度运算]
 * http://gmplib.org
 * GMP库可以运算高精度
 * 由源码编译后生成GCC库，
 * http://downloads.sourceforge.net/mingw/MSYS-1.0.11.exe
 * 
 * MATLAB混合运算引擎
 * 
 * 
 * 
*/
