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
  int A[N];
  for(int i=0;i<N;i++) cin >> A[i];

  int ans = 0;
  while(1){
    bool abl = true;
    for(int i=0;i<N;i++){
      if(A[i]%2==1) abl = false;
      else A[i] /= 2;
    }
    if(abl) ans++;
    else break;
  }

  cout << ans << endl;
  return 0;
}
