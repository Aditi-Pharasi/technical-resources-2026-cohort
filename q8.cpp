#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  int d=0;
  int i=1;
  int r=0;
  while(i<=k){
    d=n%10;
    n=n/10;
    r+=d*pow(10,i-1);
    i++;  
  }
  string newn=to_string(n);
  cout<<newn<<endl;
  string newr=to_string(r);
  cout<<newr<<endl;
  string arotate=newr+newn;
  cout<<"rotated number"<<arotate<<endl;
  return 0;
}