#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    //write your code here
    if(marks>90){
        cout<<"Excellent";}
    else if(marks>80){
        cout<<"Good";
        }
    else if(marks>70){
        cout<<"Fair";
    }
    else if(marks>60){
        cout<<"Meets expectation";
    }
    else{cout<<"Below par";
    }
}