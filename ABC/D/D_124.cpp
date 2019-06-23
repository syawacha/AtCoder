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
  int N,K;
  cin >> N >> K;
  string s;
  cin >> s;

  vector<int> t;
  if(s[0] != '1') t.push_back(0);
  int cnt = 1;
  for(int i=1;i<N;i++){
    if(s[i] == s[i-1]) cnt++;
    else {
      t.push_back(cnt);
      cnt = 1;
    }
  }
  t.push_back(cnt);
  if(s[N-1] != '1') t.push_back(0);

  /*for(int i=0;i<t.size();i++){
    cout << t[i] << endl;
  }*/

  int M = t.size();
  int sum[M+1];
  sum[0] = 0;
  for(int i=1;i<=M;i++) sum[i] = sum[i-1] + t[i-1];

  int ans = 0;
  for(int i=0;i<M;i+=2){
    int ind = i + 2 * K;
    if(ind >= M) ans = max(ans, sum[M] - sum[i]);
    else ans = max(ans, sum[ind+1] - sum[i]);
  }

  cout << ans << endl;
  return 0;
}
