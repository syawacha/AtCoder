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
    int tmp;
    cin >> tmp;
    mp[tmp]++;
  }

  int cnt = 0;
  for(auto itr = mp.begin() ; itr!=mp.end() ; itr++){
    //cout << itr->first << " " << itr->second << endl;
    if(itr->first > itr->second){
      cnt += itr->second;
    }
    else{
      cnt += itr->second - itr->first;
    }
  }

  cout << cnt << endl;
  return 0;
}
