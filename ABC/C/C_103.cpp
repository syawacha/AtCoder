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
  int ans = 0;
  for(int i=0;i<N;i++){
    int tmp;
    cin >> tmp;
    ans += tmp - 1;
  }
  cout << ans << endl;
  return 0;
}
