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
  int N;
  ll M;
  cin >> N >> M;
  ll A[N];
  for(int i=0;i<N;i++) cin >> A[i];
  map<int,int> mp;

  //累積和
  ll sum[N+1];
  sum[0] = 0LL;
  mp[0]++;
  for(int i=1;i<=N;i++){
    sum[i] = sum[i-1] + A[i-1];
    sum[i] = sum[i] % M;
    mp[sum[i]]++;
  }

  ll cnt = 0LL;
  for(auto it = mp.begin() ; it!=mp.end() ; it++){
    //cout << it->first << it->second << endl;
    if(it->second >= 2){
      ll tmp = it->second;
      cnt += tmp * (tmp-1) / 2;
    }
  }

  cout << cnt << endl;
  return 0;
}
