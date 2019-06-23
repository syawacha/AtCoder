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
  int K,S;
  cin >> K >> S;

  int ans = 0;
  for(int x=0;x<=K;x++){
    for(int y=0;y<=K;y++){
      int z = S - x - y;
      if(0 <= z && z <= K) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
