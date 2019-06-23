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
  ll N,K;
  cin >> N >> K;
  ll cnt = 0;
  pair<int,int> p[N];
  for(int i=0;i<N;i++) cin >> p[i].first >> p[i].second;

  sort(p,p+N);

  for(int i=0;i<N;i++){
    if(cnt + p[i].second < K){
      cnt += p[i].second;
    }
    else{
      cout << p[i].first << endl;
      break;
    }
  }

  return 0;
}
