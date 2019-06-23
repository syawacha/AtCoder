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
  int a[N];
  for(int i=0;i<N;i++) cin >> a[i];

  sort(a,a+N);

  cout << a[N-1] - a[0] << endl;
  return 0;
}
