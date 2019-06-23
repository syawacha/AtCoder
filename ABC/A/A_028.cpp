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

  if(N<=59) cout << "Bad" << endl;
  if(60 <= N && N <= 89) cout << "Good" << endl;
  if(90 <= N && N <= 99) cout << "Great" << endl;
  if(N == 100) cout << "Perfect" << endl;

  return 0;
}
