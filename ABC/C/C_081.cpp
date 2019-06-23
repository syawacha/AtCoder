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
  int N,K;
  cin >> N >> K;
  map<int,int> mp;
  for(int i=0;i<N;i++){
    int tmp;
    cin >> tmp;
    mp[tmp]++;
  }

  vector<int> cnt;
  for(auto it=mp.begin() ; it!=mp.end() ; it++){
    cnt.push_back(it->second);
  }

  sort(cnt.begin(),cnt.end());
  reverse(cnt.begin(),cnt.end());

  //for(int i=0;i<cnt.size();i++) cout << cnt[i];
  //cout << endl;

  int sum = 0;
  for(int i=K;i<cnt.size();i++){
    sum += cnt[i];
  }

  cout << sum << endl;
  return 0;
}
