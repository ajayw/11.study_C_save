/**
 * [函数声明]
 * 定义只能一次，声明可以多次
 * 定义：函数实现
 * 函数声明放头文件.h中，函数实现放.c中
 * 
 * 
 * 
*/

/**
 * [函数原型]
 * 提供函数调用所需的接口信息
 * 有两种方式，不需要规定参数名，甚至可以没有
 * 1.返回类型 函数名(类型1 参数名1，类型2 参数名2，...);
 * 2.返回类型 函数名(类型1,类型2,...);
 * 
 * double sqrt(double x);//函数原型，有分号结束，函数头的话没有分号
*/
/**
 * [库函数调用]
 * 图形界面库Qthttp://www.qt.io/
 * 多媒体库OpenAL https://www.openal.org/
 * 图形界面库wxWindowshttps://www.wxwidgets.org/
 * 图形库OpenGL https://www.openal.org/
 * 网络开发库：Winsock
 * 数据库开发库：ODBC API
 * 科学计算函数库：GSL
 * 
 * 库函数声明
 * 
*/
/**
 * [调用第三方函数]
 * 
*/
/**
 * [内联函数]编译时就将被调用函数嵌入到主调函数中
 * 内联函数声明在函数定义的前面加inline修饰符
 * inline 返回类型 函数名(形参)
 * {
 *      函数体
 * }
 * 不允许使用循环语句
 * 
*/
/**
 * [函数调用形式]
 * 1.嵌套调用：调用函数过程中又调用另一个函数
 * 2.递归调用
 * 
 * [递归调用]函数直接或间接调用自己
 * 代码相同，存储单元不同
 * 递归函数要有终止条件，否则栈耗尽
 * 直接调用
 * 间接调用
 * 
*/
#include <stdio.h>
int gcd(int m,int n);
int gcd(int m,int n)    //欧几里算法求最大公约数
{
    int r;
    while(n!=0) 
    {
        r = m%n;//r为m/n余数
        m = n;  //被除数换成除数
        n = r;  //余数换成被除数
    }
    return m;
}
inline fun(int n,int m)//内联函数
{
    int k;
    k = n*n+m*m;
    return k;
}
int ftab(int n)
{
    if(n>1) return f(n-1)*n;
    return 1;
}
int main()
{
    int m,n;
    printf("input two number:");
    scanf("%d%d",&m,&n);
    printf("%d\n",gcd(m,n));//调用gcd()函数

    //内联函数计算平方和
    int n=5,m=8,k;
    k = fun(n,m);
    printf("k=%d\n",k);
    
    //嵌套调用：调用函数过程中又调用另一个函数
    int a=5,b=10,c;
    c=fa(a,b);
    printf("%d",c);
    c=fb(a+b);
    printf("%d",c);

    //递归函数求n的阶乘
    printf("%\n",ftab(5));
    return 0;
}

int fa(int a,int b)
{
    int z;
    z=fb(a*b);//被调用函数内部还有调用另一个函数
    return z;
}
 int fb(int x)
 {
    int a=15,b=20,c;
    c=a+b+x;
    return c;
 }