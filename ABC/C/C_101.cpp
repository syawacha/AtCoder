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
  int N,K;
  cin >> N >> K;
  int A[N];
  for(int i=0;i<N;i++){
    cin >> A[i];
  }

  int i=0;
  int ans=0;
  while(i<N-1){
    i += K-1;
    ans++;
  }

  cout << ans;
  return 0;
}
