#include<stdio.h>
#include<math.h>
int main(){
    float R1, R2, R3,R;
    scanf("%f%f%f", &R1, &R2, &R3);
    R = (float)(1/(1/R1+1/R2+1/R3));
    printf("%.1f", R);
    return 0;
}