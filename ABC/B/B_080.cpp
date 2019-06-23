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
  int n = N;

  int f = 0;
  while(n>0){
    f += n % 10;
    n /= 10;
  }

  if(N % f == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
