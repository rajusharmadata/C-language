// header file
#include<stdio.h>
    unsigned long long  fact(int n);// decleartaion of function
// main function
int main(){
    unsigned long long  n;
    printf("Enter number :");
    scanf("%d",&n);
unsigned long long ans = fact(n);// function call
printf("%llu",ans);
return 0;
        
}// processing
unsigned long long   fact(int n){
    if(n<0){
    return 0;
    }
    unsigned long long fact = 1;
    int i;
    for(i=n; i>=1;i--)
    {
    fact = fact*i;
    }
    return(fact);// return value
}
