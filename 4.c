#include<stdio.h>
#include<math.h>
int main(){
    float a,b;
    scanf("%f%f", &a,&b);
    printf("%.1f\n%.1f",(float)(a+b)/2,sqrt(a*b));
    return 0;
}