/**
 * [文件包含]
 * #include <>  编译器include系统路径查找
 * #include ""  现在项目路径找，再到include找
 * 
 * [头文件内容]
 * 函数声明
 * 全局性常量
 * 类型声明
 * 宏定义
 * 
 * [文件包含路径]
 * #include "C:\dev\gsl\include.h" //绝对路径
 * #include <zlib\zlib.h>  //编译器下的include\zlib\zlib.h
 * 
 * 避免重复包含
 * 
 * 
*/
/**
 * [条件编译]
 * #if !defined(_INT_INCLUDE_)
 * #define _INT_INCLUDE_
 * 
 * //头文件内容
 * 
 * #endif
 * 
 * [特殊编译，只编译一次]
 * #pragma once
 * //头文件
 * 
 * 
*/
/**
 * SDL函数库
 * 
*/
/**
 * [条件编译]
 * 版本区分
 * 调试版本debug
 * 发行版本release
 * 
 * 
*/
//------
#ifdef DEBUG //条件字段
printf("x=%d,y=%d,z=%d\n",x,y,z);
#else

#endif
//-------
#ifndef _MSC_VER//如果是Visual C++编译器
#ifndef _CONSOLE//Visual C++编译器根据控制台参数内部已经定义
//程序代码
#endif
#endif
//-------
#if 常量表达式
//代码段1
#else
//代码段2
#endif
//-------

//测试GCC编译器版本是否为3.0以上
#ifdef _GUNC_
#if (_GUNC_>=3)
//
#endif
#endif

//判断Windows系统版本
#if (WINVER >= 0x0501) //在Windows XP及以上系统
//程序代码段1
#elif (WINVER == 0x0500) //在Windows 2000系统
//程序代码段2
#else //在Windows 98系统
//程序代码段3
#endif

/*

一个球从100米高度自由落下,每次落地后反弹回原高度的一半,再落下。
求它在第十次落地时,共经过多少米?第十次反弹多高?用“调试”和“释放”分别表示调试,正式版本,编写条件编译。
正式版本直接计算结果,调试版本则还要输出球每次落地反弹的数据便于调试中间过程。

*/
#include <stdio.h>
int main()
{
    double sn =100.0,hn = sn/2;
    int n;
    for(n=2;n<=10;n++)
    {
        sn=sn+2*hn;
        hn=hn/2;
#ifdef DEBUG
        printf("sn=%lf,hn=%lf\n",sn,hn);
#endif
    }
    printf("the total of road is %lf\n",sn);
    printf("the tenth is %lf meter\n",hn);
    return 0;
}

/**
 * codeblacks软件内项目增加宏定义_DEBUG
 * 
 * 
*/
/**
 * #error
 * 执行遇到该命令时停止编译，输出错误
 * 
 * */
#ifndef _win32
  #error _WIN32 must be defined
#endif
/**
 * #pragma 设定编译器的状态，或指示完成特定动作
 * 
 * #pragma once
 * 表示文件被包含一次
 * 
*/
/**
 * #line 行号跳转
 * 
*/
