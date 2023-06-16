#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<cstring>
using namespace std;
int main() {
  int n,count=0,r;
  cin>>n;
  while(n>0){
r=n%10;
n/=10;
if(r==6)
count++;
  }
  cout<<"numbers of digits = "<<count<<endl;
return 0;
}