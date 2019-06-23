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

bool isPrime(int N){
  if(N<=1) return false;
  if(N==2) return true;
  if(N%2==0) return false;

  for(int i=3 ; i*i<=N ; i+=2){
    if(N % i == 0) return false;
  }

  return true;
}

//============================================
int main(){
  int Q;
  cin >> Q;
  int l[Q],r[Q];
  for(int i=0;i<Q;i++) cin >> l[i] >> r[i];

  bool prime[100001];
  fill(prime,prime+100001,false);
  for(int i=3;i<100000;i++){
    if(i%2 == 1){
      if(isPrime(i) && isPrime((i+1)/2)) prime[i] = true;
    }
  }

  //累積和
  int sum[100002];
  sum[0] = 0;
  for(int i=1;i<=100001;i++){
    if(prime[i-1]){
      sum[i] = sum[i-1] + 1;
    } else {
      sum[i] = sum[i-1];
    }
  }

  for(int i=0;i<Q;i++){
    cout << sum[r[i]+1] - sum[l[i]] << endl;
  }

  return 0;
}
