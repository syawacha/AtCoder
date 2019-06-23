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
typedef pair<int,ll> P;

int N;
vector<int> p[100000];
bool vtd[100000];
vector<int> path;
bool foundPath = false;

void findPath(int n){
  if(foundPath) return;
  //cout << n << endl;
  path.push_back(n);
  /*for(int i=0;i<(int)path.size();i++){
    cout << path[i];
  }
  cout << endl;*/
  if(n == N-1) foundPath = true;

  vtd[n] = true;
  for(int i=0;i<(int)p[n].size();i++){
    if(!vtd[p[n][i]]){
      findPath(p[n][i]);
    }
  }
  if(foundPath) return;
  path.pop_back();
  return;
}

int dfs(int n){
  vtd[n] = true;
  int cnt = 1;
  for(int i=0;i<(int)p[n].size();i++){
    if(!vtd[p[n][i]]){
      cnt += dfs(p[n][i]);
    }
  }
  return cnt;
}

//==============================================================
int main(){
  cin >> N;
  for(int i=0;i<N-1;i++){
    int a,b;
    cin >> a >> b;
    a--; b--;
    p[a].push_back(b);
    p[b].push_back(a);
  }

  //0~N-1までのパスを見つける
  fill(vtd,vtd+100000,false);
  findPath(0);
  /*for(int i=0;i<(int)path.size();i++){
    cout << path[i];
  }
  cout << endl;*/

  int s,t;
  if(path.size()%2==0){
    s = path[path.size()/2 - 1];
    t = path[path.size()/2];
  } else {
    s = path[path.size()/2];
    t = path[path.size()/2 + 1];
  }

  //黒の点をdfsで数え上げ
  fill(vtd,vtd+100000,false);
  vtd[t] = true;
  int cnt = dfs(s);

  //cout << cnt << endl;
  if(cnt > N - cnt){
    cout << "Fennec" << endl;
  } else {
    cout << "Snuke" << endl;
  }
  return 0;
}
