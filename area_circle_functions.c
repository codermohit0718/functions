#include<stdio.h>
int area(int r){
    return 3.14*r*r;
}
int main(){
    int r;
    printf("the radius of circle is:");
    scanf("%d",&r);
    printf("Area of the circle:%d",area(r));
    return 0;
}