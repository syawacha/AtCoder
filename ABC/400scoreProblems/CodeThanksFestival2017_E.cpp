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

int beki[5] = {1,10,100,1000,10000};

//xのn桁目を返す
int dig(int x, int n){
  for(int i=0;i<n;i++){
    x /= 10;
  }
  x %= 10;
  return x;
}

int main(){
  int N;
  cin >> N;

  int ans[N];
  for(int i=0; i<N; i += 5){
    int q[N];
    fill(q, q+N, 0);
    for(int j=0; (j<5 && i+j<N); j++){
      q[i+j] = beki[j];
    }

    cout << "? ";
    for(int j=0;j<N;j++){
      cout << q[j] << " ";
    }
    cout << endl;

    int x;
    cin >> x;
    for(int j=0; (j<5 && i+j<N); j++){
      int y = dig(x,j);
      if(y == 8){
        ans[i+j] = 0;
        x -= 8 * beki[j];
      }
      if(y == 9){
        ans[i+j] = 1;
        x -= 9 * beki[j];
      }
      if(y == 0){
        ans[i+j] = 0;
        x -= 10 * beki[j];
      }
      if(y == 1){
        ans[i+j] = 1;
        x -= 11 * beki[j];
      }
      if(y == 2){
        ans[i+j] = 0;
        x -= 12 * beki[j];
      }
    }
  }

  cout << "! ";
  for(int i=0;i<N;i++){
    cout << ans[i] << " ";
  }
  cout << endl;

  return 0;
}
