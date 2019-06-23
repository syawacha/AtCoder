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
using namespace std;

int main(){
  string S,T;
  cin >> S >> T;

  int s = S.size();
  int t = T.size();

  string ans;
  bool existAns = false;
  for(int i=0;i<=s-t;i++){
    bool isok = true;
    for(int j=0;j<t;j++){
      if(S[i+j]!=T[j] && S[i+j]!='?'){
        isok = false;
        break;
      }
    }

    if(isok){
      string tmp = S;
      for(int j=0;j<s;j++){
        if(tmp[j] == '?') tmp[j] = 'a';
      }
      for(int j=0;j<t;j++){
        tmp[i+j] = T[j];
      }
      if(!existAns){
        existAns = true;
        ans = tmp;
      }
      else{
        ans = min(ans,tmp);
      }
    }
  }

  if(existAns) cout << ans << endl;
  else cout << "UNRESTORABLE" << endl;

  return 0;
}
