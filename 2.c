#include<stdio.h>
#include<math.h>
int main(){
    float x,y,s;
    scanf("%f%f", &x,&y);
    //(|x|-|y|)/(1+|xy|)
    if(x<0)
    x=x*(-1);
    if(y<0)
    y=y*(-1);
    printf("%.1f",(x-y)/(float)(1+x*y));
    return 0;
}