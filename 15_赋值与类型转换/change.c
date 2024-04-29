/**
 * [复合赋值运算]
 * expr1*=expr2;//先expr1乘expr2再赋值给expr1;
 * expr1<<=expr2;//expr1先左移expr2个位，再赋值给expr1；
 * c*=m+n;//c=c*(m+n);
 * 
 * 左右两边的类型应相同，否则存在溢出
 * char a;
 * a=4.2;//4.2被转化成4,丢失0.2
 * a=400;//char 类型最多范围-128~127,
 * 
 * 赋值表达式：左值与右值
 * 左值：变量、数组、指针（特别是const常量不能放左边）
 * 右值：大多数类型
 * 
 * 隐式类型转换和显式类型转换
 * 隐式：左值与右值类型不一致时、函数调用时、混合运算时，自动将右值隐式地转换成左值类型
 * int m=10;
 * m=m*1.5;//转成浮点数
 * 
 * [转换原则]：存储空间提升原则，转成大存储空间
 * 低： int <--char ,short
 *      |
 *      v
 *      unsigned
 *      |
 *      v
 *      long
 *      |
 *      v
 *高:   double <--float
 *      
 * [位运算类型转换]
 * unsigned short A=7;//A是两字节，16位
 * unsigned char B=9;//B是一字节，8位
 * char C=-7;//C是一字节，8位
 * 位运算：
 * A&B=1;//自动将B转成16位
*/
void main()
{
    int m=25;
    m=m+=m*=m-=15;//结果200

}