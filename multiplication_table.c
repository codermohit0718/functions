#include<stdio.h>
int table(int n){
    for(int i = 1;i<=10;i++){
    printf("%d*%d=%d\n",n,i,n*i);
    }
    return table;

}
int main(){
    int n=5;
    table(n);
    return 0;
}

