#include<stdio.h>
int revarse(int n){
    int i , number,rev_ers = 0;
    for(i=0;n>0;i++){
    int number= n%10;
    n = n/10;
    rev_ers= rev_ers*10+ number;

}
    return rev_ers;

}
void main(){
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    printf("%d",revarse(n));

}