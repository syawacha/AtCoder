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
  bool isok[N];
  fill(isok,isok+N,false);
  for(int i=0;i<N;i++){
    if(s[i]=='A' || s[i]=='T' || s[i]=='C' || s[i]=='G'){
      isok[i] = true;
    }
  }

  int cnt[N];
  for(int i=0;i<N;i++){
    if(!isok[i]) cnt[i] = 0;
    else if(isok[i] && i==0) cnt[i] = 1;
    else if(isok[i]) cnt[i] = cnt[i-1] + 1;
  }

  cout << *max_element(cnt,cnt+N) << endl;
  return 0;
}
