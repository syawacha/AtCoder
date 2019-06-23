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
  int N, L;
  cin >> N >> L;

  int ans = 0;
  if(L >= 0){
    for(int i = 0; i < N; i++){
      ans += L + i;
    }
    ans -= L;
  }
  else{
    if(-L < N){
      for(int i = 0; i < N; i++){
        ans += L + i;
      }
    }
    else{
      for(int i = 0; i < N; i++){
        ans += L + i;
      }
      ans -= L + N - 1;
    }
  }

  cout << ans << endl;
  return 0;

}
