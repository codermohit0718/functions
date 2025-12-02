#include<stdio.h>
int si(int p,int r,int t){
    return (p*r*t)/100;
}
int main(){
    int p,r,t;
    printf("enter the value of p:");
    scanf("%d",&p);
    printf("enter the value of t:");
    scanf("%d",&r);
    printf("enter the value of t:");
    scanf("%d",&t);
    printf("the simple interest is:%d",si(p,r,t));
    return 0;
}
