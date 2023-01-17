#include <iostream>
#include<math.h>

using namespace std;

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    while(num1%num2!=0){
        int remainder=num1%num2;
        num1=num2;
        num2=remainder;
    }
    cout<<"GCD :"<<num2<<endl;;
    int lcm=(num1*num2)/num2;
    cout<<"LCM :"<<lcm<<endl;
    return 0;

}