/**
 * 循环和递归区别：递归建立栈，存储空间每次调用时不同
 * [递归算法关键]找出递归关系和边界条件
 * 1.分析，得出递归关系式
 * 2.设置边界，控制递归
 * 3.设计函数，确定参数
 * 
 * [分治法]
 * 1.分解：
 * 2.解决：
 * 3.合并：将子问题解合并为原问题解
 * 
 * 
*/
void hanoi(int n,char A,char B,char C)
{
    if(n==1) printf("%c->%c",A,C);
    else{
        hanoi(n-1,A,C,B);
        printf("%c->%c",A,C);
        hanoi(n-1,B,A,C);
    }
}

int main()
{
    int n;
    printf("input n:");
    scanf("%d",&n);
    hanoi(n,'A','B','C');
    return 0;
}