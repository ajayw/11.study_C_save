#include <stdio.h>
#define PI 3.1415926

void main()
{
    /*字符常量*/
    //转义字符：换行\n;TAB\t;
    printf("ab c\t de\rf\tg\n");
    printf("h\ti\b\bj k\n123\'\"\\\x41");
    //字符串中间不能换行

    /*符号常量*/
    double r = 5.0;
    printf("L=%f,S=%f",2*PI*r,PI*r*r);

    /**
     * 变量
     * 内存单元
    */
    double a,b,c,d;
    int i,j,k;
    char m,n;
    //错误的定义：int a,char c;

    /*存储变量修饰*/
    register int newint;//寄存器变量
    static int newdata;//静态存储类别变量
    extern char newchar;//

    /*只读变量const,定义时就马上赋值*/
    const int i=6,j=10;//多人开发时定义成只读变量防止被修改

    /**
     * volatile 限定
     * 保证变量是最新的值，程序优化就是已知x=5,那么x*x只需要取一次
     * 在变量定义前加上volatile修饰, "阻止”编译器对这样的变量 进行优化。
     * 这样的变量称为隐式存取变量,它表示变量在程序运行期间会隐式地(不明显地)被修改。
    */
    volatile int newdata;
    int x=5,m,n;
    volatile int y=6;
    m = x*x;
    n = y*y;
}