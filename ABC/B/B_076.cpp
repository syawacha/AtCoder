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
  int N,K;
  cin >> N >> K;
  int num = 1;
  for(int i=0;i<N;i++){
    num = min(num*2,num+K);
  }

  cout << num << endl;
  return 0;
}
