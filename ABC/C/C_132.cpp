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
  int N;
  cin >> N;
  int d[N];
  for(int i = 0; i < N; i++) cin >> d[i];

  sort(d, d + N);

  cout << d[N / 2] - d[N / 2 - 1] << endl;
  return 0;
}
