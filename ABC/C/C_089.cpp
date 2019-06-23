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
  ll cnt[5] = {};
  for(int i=0;i<N;i++){
    string str;
    cin >> str;
    char s = str[0];
    if(s=='M') cnt[0]++;
    else if(s=='A') cnt[1]++;
    else if(s=='R') cnt[2]++;
    else if(s=='C') cnt[3]++;
    else if(s=='H') cnt[4]++;
  }
  //cout << mp['M'] << endl;

  ll ans = 0LL;
  for(int i=0; i<(1 << 5) ; i++){
    vector<int> use;
    int tmpi = i;
    for(int j=0;j<5;j++){
      if(tmpi%2==1) use.push_back(j);
      tmpi /= 2;
    }
    if(use.size()==3){
      ans += cnt[use[0]] * cnt[use[1]] * cnt[use[2]];
    }
  }

  cout << ans << endl;
  return 0;
}
