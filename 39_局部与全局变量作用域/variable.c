/**
 * [局部变量]
 * 1.只能在定义它的区域及其子区域中使用
 * 2.同一个区域中不能定义相同名字的变量
 * 3.在不同区域中允许定义相同名字的变量
 * 4.如果一个变量所处区域的子区域中有同名的变量，
 * 则该变量在子区域无效，有效的是子区域的变量，
 * 称为定义屏蔽（就近原则）
 * 
 * [全局变量]函数外部定义的变量
 * 跨函数传递值
 * 依然具有屏蔽
 * 模块化少用全局变量
 * 
 * [实体]
 * 1.变量或对象：基本类型变量、数组对象、指针对象、结构体对象
 * 2.函数；
 * 3.类型：结构体类型、共用体类型；
 * C语言中每个名字都与唯一的实体对应；
 * 
 * [作用域]
 * 1.文件作用域：源文件第一行开始到文件结束的区域
 * 2.函数作用域：区域范围，函数右边“}”结束
 * 3.块作用域：由复合语句一对大括号{}界定的区域。语句可嵌套，作用域也就可以嵌套
 * 4.类型声明作用域：在结构体类型、共用体类型声明中由大括号{}界定的区域。 
 * 类型声明作用域可以放在文件作用域、函数作用域、块作用域中
 * 5.函数原型作用域：函数原型括号内的区域，即形参列表区域
 * 
 * 文件作用域属于全局作用域，其他都属于局部作用域，由一对大括号界定。
 * 
 * [函数间数据传递]
 * 实体在作用域内可以使用称为可见，有效。
 * 规则1：同意作用域不允许有相同名字的实体，不同的作用域实体互不可见。
 * 规则2：在作用域内，实体从定义或声明位置开始一直往下都可见，
 * 包括作用域内部子区域嵌套，往上不可见。
 * 规则3：实体A在作用域内的子区域中出现相同名字的实体B，则A被屏蔽，
 * 即实体A在子区域不可见，实体B可见。（就近原则）
 * 规则4：extern声明为前置声明，使得作用域往前延伸。例如本来在外部定义
 * 了变量，在函数内部用不了，但是在函数内部添加extern int h,k;之后就能
 * 将外部的变量h,k的值拿过来使用,跨文件间作用域也同理。
 * **************************************************************
 * 规则5：在全局作用域中，变量或函数实体使用static修饰，则该实体对于    *
 * 其他源文件屏蔽，称为私有。  
 * 在另一个文件中已经定义过int func(a,b),但并不知道该函数作用，还想在  *
 * 本文件定义同样的函数int func(),就可以使用static int func() 私有化  *
 * **************************************************************
 * 
 * 
 * 
 * 
*/
//向上延伸 声明函数原型
extern int getData(int name1,int name2,...);

//修饰函数原型
static int getData2(int name1,int name2,...);

int main()
{
    extern int number;//extern声明变量实体
    static int number2;//static声明变量实体
}