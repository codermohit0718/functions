#include<stdio.h>
int even_odd(int n){
    int even;
    if(n%2==0){
        return "even";
    }
    else{
        int odd;
        return "odd";
    }
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("the number is even or odd is:%s",even_odd(n));
    return 0;
}
