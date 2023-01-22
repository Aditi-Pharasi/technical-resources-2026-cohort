#include <iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;
int prime(int t){
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
            return false;
            //cout<<"this is not prime number";
            }else{return true;
                //cout<<"this is a prime number";}
        t--;
    }
}
}
int main(){
    int n;
    cin >> n;
    for(int i=2; i<=n; i++){
        if (n%i=0 && prime(i)){
            cout<<i<<"is a prime factor of "<<n<<endl;
        }
    }
}
