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
  int N,A,B;
  cin >> N >> A >> B;

  int ans = 0;
  for(int i=1;i<=N;i++){
    int itmp = i;
    int sum = 0;
    while(itmp > 0){
      sum += itmp % 10;
      itmp /= 10;
    }

    if(A <= sum && sum <= B) ans += i;
  }

  cout << ans << endl;
  return 0;
}
