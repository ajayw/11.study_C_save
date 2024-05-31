/**
 * 输入边长计算三角形面积
 * 
*/
#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c;
    printf("input a,b,c:");
    scanf("%lf%lf%lf",&a,&b,&c);
    //构成三角形边长的条件
    if(a+b>c&&b+c>a&&a+c>b){
        double s,t;
        t=(a+b+c)/2.0;
        s=sqrt(t*(t-a)*(t-b)*(t-c));
        printf("area=%.2f",s);
    }else{
        printf("error\n");
    }
}