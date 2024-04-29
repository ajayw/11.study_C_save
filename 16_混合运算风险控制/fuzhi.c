/**
 * [浮点型赋值给整型时，丢失小数部分]
 * [整型赋值给浮点型时，数值不变，但以浮点型存储，78按78.0处理,7位~16位有效数字]
 * [char型赋值给short、int，数值存到低8位，高位补0,反之，int将低8位存到char,丢失高8位]
 * [将长度相同的无符号和有符号整型相互赋值时，符号位和数值位同时赋值]
 * 
 * 用显式类型转换避免隐式转换导致的错误
 * 显式转换运算符：(type)单目
 * (int)expr
 * (int)x+y//将x转成整型
 * (int)(x+y)//将x+y转成整型
 * 
 * 被转换的变量的类型不会发生改变，只是表达式运算过程发生改变
 * (int)x%3//x类型始终不变，只是在这个表达式中临时被转成int参与运算
 * 
 * 例子：将一个浮点数变量d=1.2356保留两位小数(四舍五入)
 * (int)(d*100+0.5)/100.0
 * d*100=123.56
 * 123.56+0.5=124.06
 * (int)124.06=124
 * 124/100.0=1.24
 * 
 * [数据的内存形式]
 * |变量类型         |-32768|-128|-1|168|32767|65535|2147483647|
 * |int             |
 * |unsigned int    |
 * |short           |
 * |unsigned short  |
 * |char            |
 * |unsigned char   |
*/