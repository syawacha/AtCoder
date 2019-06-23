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
  int a[N], b[N];
  for(int i=0;i<N;i++) cin >> a[i];
  for(int i=0;i<N;i++) cin >> b[i];
  ll suma = 0LL;
  ll sumb = 0LL;
  for(int i=0;i<N;i++){
    suma += a[i];
    sumb += b[i];
  }

  if(suma < sumb){
    cout << -1 << endl;
    return 0;
  }

  priority_queue<int> que;
  ll x = 0LL; //足りない分
  for(int i=0;i<N;i++){
    if(a[i] < b[i]) x += b[i] - a[i];
    else{
      que.push(a[i] - b[i]);
    }
  }

  while(x > 0){
    int q = que.top();
    que.pop();
    x -= q;
  }

  cout << N - que.size() << endl;
  return 0;
}
