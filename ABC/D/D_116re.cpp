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
  int N,K;
  cin >> N >> K;
  vector<pair<ll,int>> vec(N);
  for(int i=0;i<N;i++) cin >> vec[i].second >> vec[i].first;

  sort(vec.begin(),vec.end());
  reverse(vec.begin(),vec.end());

  ll sum=0;
  map<int,int> mp;
  vector<ll> opt;
  for(int i=0;i<K;i++){
    if(mp[vec[i].second] == 0){
      mp[vec[i].second] = 1;
    }else{
      opt.push_back(vec[i].first);
    }
    sum+=vec[i].first;
  }

  int pos = opt.size()-1;
  ll sz = mp.size();
  ll ans = sum + sz*sz;
  for(int i=K;i<N;i++){
    if(sz == K) break;
    if(mp[vec[i].second]==1) continue;

    mp[vec[i].second] = 1;
    sz++;
    sum-=opt[pos];
    sum+=vec[i].first;
    pos--;

    ans=max(ans,sum+sz*sz);
  }
  cout << ans <<endl;
  return 0;
}
