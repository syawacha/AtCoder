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

  int cnt = 0;
  for(int i=0;i<N;i++){
    int l,r;
    cin >> l >> r;
    cnt += r - l + 1;
  }

  cout << cnt << endl;
  return 0;
}
