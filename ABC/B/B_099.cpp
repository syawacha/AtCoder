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
  int a,b;
  cin >> a >> b;

  int c = b - a;

  int trueA = 0;
  for(int i=1;i<=c-1;i++){
    trueA += i;
  }

  cout << trueA - a << endl;
  return 0;
}
