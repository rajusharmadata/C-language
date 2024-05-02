#include<iostream>
using namespace std;      
int main(){
     int ans=0,n;
     cout<<"Enter the nuber "<<endl;
     cin>>n;
     int i =2;
   while(i<n){
       if(n%i==0){
        ans = 1;
        break;
      }else{
         
         break;
      }
   }
     if(ans==0){
        cout<<" a prime number";
     }else{
        cout<<"Not A prime number"<<endl;
     }

}