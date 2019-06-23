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
int INF = 1000000000;

int main(){
  int N,M;
  cin >> N >> M;
  pair<pair<int,int>,ll> p[M];
  for(int i=0;i<M;i++){
    cin >> p[i].first.first >> p[i].first.second >> p[i].second;
    if(p[i].first.first > p[i].first.second){
      int tmp = p[i].first.first;
      p[i].first.first = p[i].first.second;
      p[i].first.second = tmp;
      p[i].second *= -1;
    }
  }

  sort(p,p+M);

  /*for(int i=0;i<M;i++){
    cout << p[i].first.first << p[i].first.second << p[i].second << endl;
  }*/

  ll pos[N+1];
  fill(pos,pos+N+1,0LL);
  bool dfd[N+1];
  fill(dfd,dfd+N+1,false);
  for(int i=0;i<M;i++){
    int L = p[i].first.first;
    int R = p[i].first.second;
    ll D = p[i].second;

    if(dfd[L] && dfd[R]){
      if(pos[R] - pos[L] != D){
        cout << "No" << endl;
        return 0;
      }
    }
    else if (dfd[L] && !dfd[R]){
      pos[R] = pos[L] + D;
      dfd[R] = true;
    }
    else if(!dfd[L] && dfd[R]){
      pos[L] = pos[R] - D;
      dfd[L] = true;
    }
    else if(!dfd[L] && !dfd[R]){
      pos[L] = 0;
      pos[R] = D;
      dfd[L] = true;
      dfd[R] = true;
    }
  }

  /*for(int i=1;i<=N;i++){
    cout << "pos" << i << "=" << pos[i] << endl;
  }*/
  cout << "Yes" << endl;
  return 0;
}
