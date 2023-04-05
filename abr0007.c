#include<stdio.h>
#include<math.h>
int main(){
    float v1, t1, v2, t2;
    scanf("%f%f",&v1,&t1);
    scanf("%f%f",&v2,&t2);
    printf("%.1f\n%.1f",((v1*t1)+(v2*t2))/(v1+v2), v1+v2);
    return 0;
}