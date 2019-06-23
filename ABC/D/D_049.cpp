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

class UnionFind{
public:
  vector<int> par;
  vector<int> rank;
  vector<int> sz;
  int N;

  UnionFind(int n){N=n;}

  //初期化
  void init(){
    for(int i=0;i<N;i++){
      par.push_back(i);
      rank.push_back(0);
      sz.push_back(1);
    }
  }

  //木の根を求める
  int find(int x){
    if(par[x]==x) return x;
    else{
      par[x]=find(par[x]);
      return par[x];
    }
  }

  //xとyの集合の併合
  void unite(int x, int y){
    x=find(x);
    y=find(y);
    if(x == y) return;

    if(rank[x] < rank[y]){
      par[x] = y;
      sz[y] += sz[x];
    }else{
      par[y] = x;
      sz[x] += sz[y];
      if(rank[x] == rank[y]) rank[x]++;
    }
  }

  //x,yが同じ集合にあるか
  bool same(int x, int y){
    return find(x) == find(y);
  }

  //xの木のサイズ
  int size(int x){
    return sz[find(x)];
  }
};

//====================================================

int main(){
  int N,K,L;
  cin >> N >> K >> L;

  UnionFind ufa = UnionFind(N);
  UnionFind ufb = UnionFind(N);
  ufa.init();
  ufb.init();

  for(int i=0;i<K;i++){
    int a,b;
    cin >> a >> b;
    a--; b--;
    ufa.unite(a,b);
  }
  for(int i=0;i<L;i++){
    int a,b;
    cin >> a >> b;
    a--; b--;
    ufb.unite(a,b);
  }

  pair<pair<int,int>,pair<int,int>> p[N];//道路 鉄道　ind cnt
  for(int i=0;i<N;i++){
    p[i].first.first = ufa.find(i);
    p[i].first.second = ufb.find(i);
    p[i].second.first = i;
    p[i].second.second = 1;
  }
  
  sort(p,p+N);

  int s=0,t=0;
  for(int i=1;i<N;i++){
    if(p[i].first.first == p[i-1].first.first
        && p[i].first.second == p[i-1].first.second){
      s++;
    } else {
      for(int j=t;j<=i-1;j++) p[j].second.second += s;
      s = 0;
      t = i;
    }

    if(i==N-1){
      for(int j=t;j<=i;j++) p[j].second.second += s;
    }
  }

  int cnt[N];
  for(int i=0;i<N;i++){
    cnt[p[i].second.first] = p[i].second.second;
  }

  for(int i=0;i<N;i++){
    cout << cnt[i] << " ";
  }
  cout << endl;
  return 0;
}
