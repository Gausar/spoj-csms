#include<stdio.h>
#include<math.h>

#define pi 3.14
int main(){
    int n;
    float r,a,x;
    scanf("%f%d",&r,&n);
    x=(double)(2*pi)/n;
    a=r*sqrt(2*(1-cos(x)));
    printf("%.1f", a*n);
    return 0;
}
