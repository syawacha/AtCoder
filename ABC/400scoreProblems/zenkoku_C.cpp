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
  cin >> N;
  pair<ll, pair<ll, ll>> p[N];
  for(int i=0;i<N;i++){
    cin >> p[i].second.first;
    cin >> p[i].second.second;
    p[i].first = p[i].second.first + p[i].second.second;
  }

  sort(p, p + N);
  reverse(p, p + N);

  ll takahashi = 0LL;
  ll aoki = 0LL;

  for(int i=0;i<N;i++){
    if(i % 2 == 0){
      takahashi += p[i].second.first;
    }
    else{
      aoki += p[i].second.second;
    }
  }

  cout << takahashi - aoki << endl;
  return 0;


}
