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
typedef unsigned int uint;
using namespace std;

int main(){
  int N;
  cin >> N;

  int mx = -1;
  int ans;
  for(int i=1;i<=N;i++){
    int itmp = i;
    int cnt = 0;
    while(itmp %2 == 0){
      cnt++;
      itmp /= 2;
    }

    if(cnt > mx){
      mx = cnt;
      ans = i;
    }
  }

  cout << ans << endl;
  return 0;
}
