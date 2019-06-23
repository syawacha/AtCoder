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
  map<int,int> mp;
  for(int i=0;i<N;i++){
    int a;
    cin >> a;
    mp[a-1]++;
    mp[a]++;
    mp[a+1]++;
  }

  int mx = 0;
  for(auto itr = mp.begin() ; itr!=mp.end() ; itr++){
    mx = max(mx,itr->second);
  }

  cout << mx << endl;
  return 0;
}
