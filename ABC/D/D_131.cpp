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
  pair<ll, ll> p[N];
  for(int i = 0; i < N; i++){
    cin >> p[i].second >> p[i].first;
  }

  sort(p, p + N);

  ll time = 0;
  for(int i = 0; i < N; i++){
    if(time + p[i].second > p[i].first){
      cout << "No" << endl;
      return 0;
    }
    else{
      time += p[i].second;
    }
  }

  cout << "Yes" << endl;
  return 0;
}
