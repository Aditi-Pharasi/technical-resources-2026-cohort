#include<iostream>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t>0){
        int n;
        cin>>n;
        int p=0;
        for (int i=2;i<n;i++){
            if(n%i==0){
                p=1;
                break;
            }
         }
        if (p==1){
            cout<<"this is not prime number";
        }else{cout<<"this is a prime number";}
        t--;
    }
    
}