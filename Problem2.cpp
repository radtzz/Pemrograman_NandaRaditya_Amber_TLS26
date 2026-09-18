#include <iostream>
using namespace std;

int main (){
  string s; cin>>s;
  cout<<s[0];
  for(int i=1; i<s.size(); ++i){
    int pos=s[i]-'A'+1;
    int prev=s[i-1]-'A'+1;
    int sum=pos+prev;
    if(sum>26) sum-=26;
    char a='A'+sum-1;
    cout<<a;
  }
  return 0;
}