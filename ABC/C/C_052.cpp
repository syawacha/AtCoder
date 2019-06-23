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

int MOD = 1000000007;

int main(){
  int N;
  cin >> N;

  map<int,int> mp;
  for(int i=1;i<=N;i++){
    int itmp = i;
    int j = 2;
    while(itmp > 1){
      if(itmp%j==0){
        mp[j]++;
        itmp /= j;
      } else {
        j++;
      }
    }
  }

  /*for(auto it = mp.begin() ; it!=mp.end() ; it++){
    cout << it->first << " " << it->second << endl;
  }*/

  ll ans = 1;
  for(auto it=mp.begin() ; it!=mp.end() ; it++){
    ans *= (it->second + 1);
    ans %= MOD;
  }

  cout << ans << endl;
  return 0;
}
