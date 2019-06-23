#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <stack>
#include <set>
#include <map>
typedef long long ll;
typedef unsigned int uint;
using namespace std;

int main(){
  string S,T;
  cin >> S >> T;

  int sz = S.size();

  //aはintで97
  bool used[26];
  fill(used,used+26,false);

  //cout << endl;
  for(int i=0;i<sz;i++){
    char s = S[i];
    char t = T[i];
    int temps = s-'a';
    int tempt = t-'a';
    if(s==t){
      used[temps] = true;
    }else{
      if(used[temps] || used[tempt]){
        cout << "No" << endl;
        return 0;
      }else{
        for(int j=i;j<sz;j++){
          if(S[j]==s) S[j]=t;
          else if(S[j]==t) S[j]=s;
          used[tempt] = true;
        }
      }
    }
    //cout << S << endl;
  }

  if(S==T){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}
