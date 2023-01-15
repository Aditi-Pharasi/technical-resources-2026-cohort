#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int n=num;
    int digit;
    int rev=0;
    while(n>0){
        digit=n%10;
        n=n/10;
        rev=rev*10+digit;
        }
    cout<<"reverse of "<<num<<"is :"<<rev<<endl;
}