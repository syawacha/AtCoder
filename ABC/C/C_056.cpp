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
  int sum = 0;
  int i = 0;
  while(sum<X){
    sum += i;
    i++;
  }

  cout << i - 1 << endl;
  return 0;
}
