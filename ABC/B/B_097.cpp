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
  int X;
  cin >> X;
  int ans = 1;
  for(int i=2;i*i<=X;i++){
    int res = 1;
    while(res <= X){
      res *= i;
    }
    res /= i;
    ans = max(ans , res);
  }
  cout << ans << endl;
  return 0;
}
