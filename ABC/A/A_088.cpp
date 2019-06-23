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
  int N,A;
  cin >> N >> A;
  N %= 500;
  if(N <= A) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
