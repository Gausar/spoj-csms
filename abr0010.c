#include<stdio.h>
#include<math.h>

#define g 9.8
int main(){
    float h,t;
    scanf("%f", &h);
    t = sqrt((h*2)/g);
    printf("%.1f",t);
    return 0;
}