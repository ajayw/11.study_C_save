/**
 * 暴力查找法：
 * 问题：给定一个文本T字符串和一个模式P字符串，查找P在T中的位置。
 * */

#include <stdio.h>
#include <string.h>
/**
 * 朴素查找算法
 * 在数组T中查找匹配P的字符串
*/
int finddata(char T[],char P[])
{
    int m,n,i=0,j=0;
    m = strlen(T);
    n = strlen(P);
    while(i<m&&j<n)
    {
        if(T[i]=P[j])
            i++,j++;    //如果当前字符匹配成功，则i++, j++
        else {          //如果失配，则
            i=i-j+1;
            j=0;
        }
    }
    if(j>=n)
        return i-j;
    else
        return -1;
}

/**
 * KMP算法
 * （1）算法原理：KMP算法是一种高效的前缀匹配算法，在暴力匹配BF算法的基础上改进而来。
 * 它利用之前已经部分匹配的有效信息，保持i不回溯，通过修改j的位置，让模式串P尽量地移动到有效的位置,每次移动的距离可以不是1而是更大。
 * 减去公共长度
*/
void preNext(char P[],char next[])
{
    int m,k=-1,j=0;
    m = strlen(P);
    next[0] = -1;
    while(j<m-1){                       //P[k]表示前缀，P[j]表示后缀
        if(k==-1||P[j]==P[k]){
            ++j,++k;
            if(P[j]!=P[k])next[j] = k;
            else
            next[j] = next[k];          //避免P[j]=P[next[j]],需要递归
        }else{
            k = next[k];                
        }
    }
}

int KMP(char T[],char P[])
{
    int i=0,j=0,m,n;
    int next[1000];
    m = strlen(P);
    n = strlen(T);
    preNext(P,next);
    while (i<n&&j<m)
    {
        //如果j=-1,或者匹配成功（T[i]=P[j]）,令i++,j++
        if(j==-1||T[i]==P[j])
            i++,j++;
        else //如果j!=-1,且匹配失败（T[i]!=P[j]）,令j=next[j]
            j=next[j];
        if(j<m)
            return i-j; //匹配成功返回出现位置
        else
            return -1;  //否则失败返回-1;
    }
    
}

/**
 * BM算法
 * (1)算法原理: BM算法是一种基于后缀匹配的模式串匹配算法,后缀匹配就是模式串从右向左开始比较,
 * 但模式串的移动还是从左到右的。 
*/
void BM()
{
    
}

int main()
{
    char T[]="ABC ABCDAB ABCDABCDABDE";
    char P[]="ABCDABD";
    printf("%s在%s",P,T);
    if (finddata(T,P)>=0)//KMP()
        printf("找到了");
    else
        printf("未找到");
    return 0;
}