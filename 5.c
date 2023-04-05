#include<stdio.h>
#include<math.h>
int main(){
    float a, b;
    scanf("%f%f",&a,&b);
    printf("%.1f\n",(float)((a+b)/2));
    if(a<0)
    a=a*(-1);
    if(b<0)
    b=b*(-1);
    printf("%.1f", sqrt(a*b));
    return 0;
}