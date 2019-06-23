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
  int S = 0;
  int tmp = N;

  while(tmp!=0){
    S += tmp % 10;
    tmp /= 10;
  }

  if(N%S==0) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
