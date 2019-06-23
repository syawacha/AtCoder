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
typedef pair<int,int> P;

int dx[3] = {-1,0,1};
int dy[3] = {-1,0,1};

int main(){
  ll H,W,N;
  cin >> H >> W >> N;
  map<P,int> mp;
  for(int i=0;i<N;i++){
    int a,b;
    cin >> a >> b;
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        mp[P(a+dx[i],b+dy[j])]++;
      }
    }
  }

  ll cnt[10] = {};
  for(auto it = mp.begin() ; it!=mp.end() ; it++){
    int x = it->first.first;
    int y = it->first.second;
    if(2 <= x && x <= H-1 && 2 <= y && y <= W - 1){
      cnt[it->second]++;
    }
  }

  cnt[0] = (H - 2) * (W - 2);
  for(int i=1;i<10;i++){
    cnt[0] -= cnt[i];
  }

  for(int i=0;i<10;i++){
    cout << cnt[i] << endl;
  }

  return 0;
}
