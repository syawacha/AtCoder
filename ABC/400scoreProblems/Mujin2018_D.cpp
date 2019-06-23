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

int rev(int a){
  int beki10[3] = {1, 10, 100};
  string s = to_string(a);
  reverse(s.begin(), s.end());
  int N = s.size();
  int ans = 0;
  for(int i=0;i<N;i++) ans += (s[i] - '0') * beki10[N - i - 1];
  return ans;
}

vector<int> G[1000000];
bool vsd[1000000];

void dfs(int n){
  if(vsd[n]) return;

  vsd[n] = true;
  int N = G[n].size();
  for(int i=0;i<N;i++){
    dfs(G[n][i]);
  }
  return;
}


int main(){
  int N, M;
  cin >> N >> M;

  for(int i = 0; i < 1000; i++){
    for(int j = 0; j < 1000; j++){
      int x = i;
      int y = j;
      int ind = 1000 * x + y;
      if(x == 0 || y == 0) continue;
      else if(x < y) x = rev(x);
      else y = rev(y);

      if(x < y) y = y - x;
      else x = x - y;

      int nxtind = 1000 * x + y;
      G[nxtind].push_back(ind);
    }
  }

  fill(vsd, vsd + 1000000, false);
  for(int i = 0; i < 1000; i++) dfs(i * 1000);
  for(int j = 0; j < 1000; j++) dfs(j);

  int ans = 0;
  for(int k = 0; k < 1000000; k++){
    int x = k / 1000;
    int y = k % 1000;
    if(!vsd[k] && x <= N && y <= M) ans++;
  }

  cout << ans << endl;
  return 0;
}
