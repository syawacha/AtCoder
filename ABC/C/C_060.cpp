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
  int N,T;
  cin >> N >> T;
  int t[N];
  for(int i=0;i<N;i++) cin >> t[i];

  ll sum = 0LL;
  for(int i=0;i<N;i++){
    if(i == N-1){
      sum += T;
    } else {
      if(t[i+1] - t[i] < T){
        sum += t[i+1] - t[i];
      } else {
        sum += T;
      }
    }
  }

  cout << sum << endl;
  return 0;
}
