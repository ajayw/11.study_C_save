/**
 * 利用比较交换排列四个数
 * 
*/
/**
 * 输入日期，输出第二天日期
 * 
*/

/**
 * 输入日期得出星座
 * 
*/
#include <stdio.h>
int main(){
    int a,b,c,d,t;
    if(a>b)t=a,a=b,b=t;//确定a<=b;
    if(a>c)t=a,a=c,c=t;//确定a<=c;
    if(a>d)t=a,a=d,d=t;//确定a<=d;
    //再比较b,c,d
    //……

    int y,m,d,Days;
    printf("input y,m,d:");
    scanf("%d%d%d",&y,&m,&d);
    switch(m){
        case 2:
            Days= 28;
            if((y%4==0&&y%100!=0)||(y%400==0))Days++;
            break;
        case 4:case 6:
        case 9:case 11:Days=30;break;
        default:Days=31;
    }
    d++;
    if(d>Days)d=1,m++;
    if(m>12)m=1,y++;
    printf("%d-%d-%d\n",y,m,d);
    
    int m,d,t;
    printf("input m,d:");
    scanf("%d%d",&m,&d);
    t=m<7?21:23;
    if(d>=t)m++;
    switch (m)
    {
        case 2:printf("水瓶\n");break;
        case 3:printf("双鱼\n");break;
        case 4:printf("白羊\n");break;
        case 5:printf("金牛\n");break;
        case 6:printf("双子\n");break;
        case 7:printf("巨蟹\n");break;
        case 8:printf("狮子\n");break;
        case 9:printf("宝女\n");break;
        case 10:printf("天平\n");break;
        case 11:printf("天蝎\n");break;
        case 12:printf("射手\n");break; 
        default:printf("摩羯\n");break;
    }
}