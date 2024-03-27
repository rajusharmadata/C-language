#include<stdio.h>




long fact(int n){
    if(n==0||n==1){
        return 1;
    }else{
        return (n * fact(n-1));
    }


}
int sum(int a ,int b){
 return a+b;
}
void main(){

        // int a=5;
        // long ans = fact(5);
        printf("%ld\n",fact(10));
        printf("%d",sum(5,3));
    
}