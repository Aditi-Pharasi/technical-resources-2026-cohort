#include <iostream>
using namespace std;
int main(){
    int low, high;
    cout<<"enter lower range greater than 1";
    cin >> low;
    cout<<"enter higher range ";
    cin>>high;
    //write your code here
    for (int i=low;i<=high;i++){
        int p=0;
        for (int j=2;j<i;j++){
            if(i%j==0){
                p=1;
                break;
            }
         }
        if (p==1){
            cout<<i<<" is not prime number"<<endl;
        }else{cout<<i<<" is a prime number"<<endl;}
    }
}