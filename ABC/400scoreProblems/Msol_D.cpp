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

vector<int> G[10001];
ll val[10001];
bool vsd[10001];
vector<ll> C;
int ind = 0;

void dfs(int n){
  //cout << "hoge" << endl;
  if(vsd[n]) return;
  vsd[n] = true;
  val[n] = C[ind];
  ind++;
  for(int i=0;i<G[n].size();i++){
    dfs(G[n][i]);
  }
  return;
}

int main(){
  int N;
  cin >> N;
  int a[N - 1], b[N - 1];
  for(int i=0;i<N - 1; i++){
    cin >> a[i] >> b[i];
    a[i]--; b[i]--;
    G[a[i]].push_back(b[i]);
    G[b[i]].push_back(a[i]);
  }

  ll c[N];
  for(int i=0;i<N;i++) cin >> c[i];
  sort(c, c + N);
  ll M = 0LL;
  for(int i=0;i<N-1;i++) M += c[i];
  for(int i=N-1;i>=0;i--) C.push_back(c[i]);


  /*for(int i=0;i<N;i++){
    cout << i << "    ";
    for(int j=0;j<G[i].size();j++){
      cout << G[i][j] << " ";
    }
    cout << endl;
  }*/

  //dfs
  fill(vsd, vsd + 10001, false);
  val[0] = c[N - 1];
  dfs(0);



  cout << M << endl;
  for(int i=0;i<N;i++) cout << val[i] << " ";
  cout << endl;
  return 0;
}
