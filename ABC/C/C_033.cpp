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
  string s;
  cin >> s;
  int N = s.size();

  int ans = 0;
  int p = 0;
  while(p!=N+1){
    int t = p;
    while(s[p]!='+'){
      p++;
      if(p==N) break;
    }
    string str = s.substr(t,p-t);

    bool exist0 = false;
    for(int j=0;j<(int)str.size();j++){
      if(str[j]=='0') exist0 = true;
    }

    if(!exist0) ans++;
    p++;
  }

  cout << ans << endl;
  return 0;
}
