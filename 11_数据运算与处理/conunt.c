/**
 * 运算对象的“数目”
 * 单目、双目、三目运算
 * 
 * 单目前缀
 * !boolean,~bits,++a,--b,+x,-y,*point,&varible,(int)floatvar,sizeof(int),
 * sizeof(a+b),sizeof a,sizeof(x+y)
 * 单目后缀
 * a++,a--
 * 
 * 双目运算符，包含两个运算对象
 * array[index],stpointer->membervar,st.membervar,
 * bits & 0x0f,bits ^ 0x0f,
 * 
 * 三目运算符
 * (expr1)?expr2:expr3
 * 
 * 运算符优先级
 * 
 * 运算符结合性
 * 左结合a+b+c
 * 右结合a+=b*=c
 * 
 * 求余数不能为浮点数
 * 两个指针不相加
 * 
 * 表达式
 * 由运算符和运算对象组成的式子
 * 表达式执行顺序，
 * 
 * 算术运算符
 * 求余数公式等价：x%y等价于x-x/y*y
 * 
*/
#include <stdio.h>
#include <math.h>
//已知int x=1234,求千位、百位、十位、个位数
int qian,bai,shi,ge;
int x = 1234;

//已知每45行要用一页纸，n行要用多少页
int n,pages;

/**
 * 已知a、b为正整数(a<b),求a、b平均值
 * 因为：a、b属于范围 -2147483648 ~ +2147483647
 * 相加可能会超出范围，所以
 * (b-a)/2+a
 * */


void main()
{
    qian = x/1000;      //保存到整数变量中自动取整
    bai = x/100%10;     //除以100取整得12，再除以10取余
    shi = x/10%10;
    ge = x%10;

    pages = (n-1)/45+1;//避开第45行


}
