#include <iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    cout<<"enter the no. whose inverse is to be found: ";
    cin >> n;
    
    int counter=1;
    int ans=0;
    while(n!=0){
        int r=n%10;
        cout<<"r:"<<r<<endl;
        n=n/10;
        cout<<"n:"<<n<<endl;
        cout<<"ans:"<<ans;
        int p;
        p=pow(10,int (r-1));//________here i am not getting the required value of p :-)
        cout<<"p: "<<p;
        ans+=counter*p;
        cout<<" ans after adding :"<<ans<<endl;
        counter++;
    }
    cout<<ans<<endl;
    return 0;   
}
    