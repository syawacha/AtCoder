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
  ll N,M;
  cin >> N >> M;
  pair<ll,ll> p[N];
  for(int i=0;i<N;i++) cin >> p[i].first >> p[i].second;
  sort(p,p+N);

  ll yensum = 0LL;
  ll sum = 0LL;

  for(int i=0;i<N;i++){
    if(M-sum >= p[i].second){
      yensum += p[i].first * p[i].second;
      sum += p[i].second;
    }
    else if(M-sum < p[i].second){
      yensum += p[i].first * (M-sum);
      break;
    }
  }

  cout << yensum << endl;
  return 0;
}
