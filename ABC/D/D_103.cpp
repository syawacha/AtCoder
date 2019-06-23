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

int main(){
  int N,M;
  cin >> N >> M;
  pair<int,int> p[M];
  for(int i=0;i<M;i++){
    cin >> p[i].first >> p[i].second;
    p[i].first--;
    p[i].second--;
  }

  sort(p,p+M);

  int cnt = 0;
  int mx = 1000000007;
  for(int i=0;i<M;i++){
    int s = p[i].first;
    int t = p[i].second;
    if(s>=mx){
      cnt++;
      mx = t;
    }
    mx = min(mx, t);
  }

  cout << cnt + 1 << endl;
  return 0;
}
