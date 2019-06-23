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
  int x[N];
  int tmp[N];
  for(int i=0;i<N;i++){
    cin >> x[i];
    tmp[i] = x[i];
  }

  sort(tmp,tmp+N);

  int med1 = tmp[N/2-1];
  int med2 = tmp[N/2];

  for(int i=0;i<N;i++){
    if(x[i]<=med1) cout << med2 << endl;
    else if(x[i]>=med2) cout << med1 << endl;
  }

  return 0;
}
