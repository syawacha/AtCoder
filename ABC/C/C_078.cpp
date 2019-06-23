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
  int beki[6] = {1,2,4,8,16,32};
  int N,M;
  cin >> N >> M;

  int t = M*1900 + (N-M)*100;
  cout << t*beki[M] << endl;
  return 0;
}
