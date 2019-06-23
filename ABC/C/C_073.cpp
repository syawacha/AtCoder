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
    mp[a]++;
  }

  int cnt = 0;
  for(auto itr = mp.begin() ; itr!=mp.end() ; itr++){
    if(itr->second%2==1) cnt++;
  }

  cout << cnt << endl;
  return 0;
}
