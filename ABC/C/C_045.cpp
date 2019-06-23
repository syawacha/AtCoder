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

ll beki[10] = {1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};

int main(){
  string S;
  cin >> S;
  int N = S.size();
  int num[N];
  for(int i=0;i<N;i++){
    num[i] = S[i] - '0';
  }

  ll ans = 0LL;
  for(int i=0;i<(1 << (N-1));i++){
    bool ext[N-1];
    fill(ext,ext+N-1,false);
    int itmp = i;
    for(int j=0;j<N-1;j++){
      if(itmp%2==1) ext[j] = true;
      itmp/=2;
    }

    int state[N];
    state[N-1] = 0;
    for(int j=N-2;j>=0;j--){
      if(ext[j]) state[j] = 0;
      else state[j] = state[j+1] + 1;
    }

    for(int j=0;j<N;j++){
      ans += num[j] * beki[state[j]];
    }
  }


  cout << ans << endl;
  return 0;
}
