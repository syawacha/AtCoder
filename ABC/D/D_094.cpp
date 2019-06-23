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
  int a[N];
  for(int i=0;i<N;i++) cin >> a[i];

  sort(a,a+N);

  int ind;
  int dist = 1000000007;
  for(int i=0;i<N;i++){
    int tmp;
    tmp = min(abs(a[N-1]/2-a[i]), abs((a[N-1]+1)/2-a[i]));
    if(tmp < dist){
      dist = tmp;
      ind = i;
    }
  }

  cout << a[N-1] << " " << a[ind] << endl;
  return 0;
}
