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
  int cntM[N]={}, cntP[N]={};//i含む右の-の数+の数
  if(s[N-1] == '-') cntM[N-1] = 1;
  if(s[N-1] == '+') cntP[N-1] = 1;
  for(int i=N-2;i>=0;i--){
    if(s[i] == '-'){
      cntM[i] = cntM[i+1] + 1;
      cntP[i] = cntP[i+1];
    }
    else if(s[i] == '+'){
      cntM[i] = cntM[i+1];
      cntP[i] = cntP[i+1] + 1;
    }
    else{
      cntM[i] = cntM[i+1];
      cntP[i] = cntP[i+1];
    }
  }

  vector<int> h;
  for(int i=0;i<N;i++){
    if(s[i] == 'M'){
      h.push_back(cntP[i] - cntM[i]);
    }
  }

  sort(h.begin(),h.end());

  ll ans = 0LL;
  for(int i=0;i<h.size()/2;i++){
    ans -= h[i];
  }
  for(int i=h.size()/2;i<h.size();i++){
    ans += h[i];
  }

  cout << ans << endl;
  return 0;
}
