/**
 * [while循环]
 * 循环三要素：
 * 循环初始、循环条件、循环控制
*/
/**
 * 循环不变式
 * 用来证明循环成立
 * [do语句]
 * do 语句 while(表达式)
 * do{
 *  语句；
 * }while(表达式);
*/
/**
 * for语句
 * for(表达式1；表达式2；表达式3){
 * 
 * }
 * 
*/
/**
 * [break语句]只能在循环内
 * 跳出本次循环
 * if(m%i==0)break;
*/
/**
 * [continue语句]：结束本次循环进入下次循环条件判断表达式处
 * 
*/
/**
 * 循环中的性能
 * 
*/
#include <stdio.h>
int main(){
    //例子：输入多个数，求乘积，当输入0就结束
    int n=1,k=1;
    do{
        k=k*n;
        scanf("%d",&n);

    }while(n!=0);
    printf("%d\n",k);
    return 0;

    //例子：判断是否为素数
    int i,m;
    scanf("%d",&m);
    for(i=2;i<=m-1;i++)
        if(m%i==0)break;
    if(i==m)printf("YES\n");
    else printf("No\n");
    return 0;

    //例子：输出右对齐阶梯*
    int i,j;
    for(i=1;i<=10;i++){
        for(j=1;j<=10-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }

    //金字塔*
    for(i=1;i<=10;i++){
        for(j=1;j<=10-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }

    //菱形*
    //#define M 10
    int i,j;//横坐标，纵坐标
    for(i=-M;i<=M;i++){
        for(j=-M;j<=M;j++)
            if((abs(i)+abs(j))<=M)//判断是否在菱形范围内
            printf("*");
            else
            printf(" ");
        printf("\n");
    }

    //空心的菱形*
    //#define M 10
    int i,j;//横坐标，纵坐标
    for(i=-M;i<=M;i++){
        for(j=-M;j<=M;j++)
            if((abs(i)+abs(j))==M)//判断是否在菱形范围内
            printf("*");
            else
            printf(" ");
        printf("\n");
    }

    //九九乘法表
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=i;j++){
            printf("%dx%d=%d ",i,j,i*j);
        }
        printf("\n");
    }

    //100<M<100000 阶乘尾数0的个数,5的因子有多少个
    int i,n,m,cnt=0;
    scanf("%d",&n);
    for(i=5;i<=n;i=i+5){
        m=i;
        while(m%5==0){
            m=m/5;
            cnt++;
        }
    }
    printf("%d\n",cnt);

    //sin(0~360)
    int j,k ;
    double i;
    for(i=1.0 ;i>=-1.0;i-=0.1) {
        k = (int)(asin(i)*10);
        printf("k-%02d ",k);
        for(j=0 ;j<=62 ;j++)
            if (j==k||j==62+k||j==31-k) //利用sin对称性和周期性求解
                printf("*"); 
            else
                printf(" ");
        printf("\n");
    }

    //循环结构例子
    int s,n,t;
    for(s=0,t=1,n=1;n<=10;n++){
        t=t*n;
        s=s+t;
    }
    printf("%d\n",s);

    //条件循环例子,精度绝对值小于10的-7次方
    //π/4~=1-1/3+1/5-1/7+……
    int s=1;
    double pi=0,n=1,t=1;
    while(fabs(t)>1e-7)
        pi=pi+t,n=n+2,s=-s,t=s/n;
    pi=pi*4;
    printf("%lf\n",pi);

    //输入的值为回车时结束输入，输出统计到的字母、数字、空格的个数
    char c;
    int a=0,n=0,s=0;
    printf("input string:");
    while((c=getchar())!='\n')
        if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))a++;//字母
    else if(c>='0'&&c<='9')n++;//数字
    else if(c==' ')s++;//空格
    printf("%d,%d,%d\n",a,n,s);

    //用0~9组成没有重复的3位偶数
    int i,j,k,n=0;
    for(i=1;i<=9;i++)//百位
        for(k=0;k<=8;k=k+2)//个位
            if(k!=i)
                for(j=0;j<=9;j++)//十位
                    if(j!=k&&j!=i)
                        n++;
    printf("%d\n",n);
}
