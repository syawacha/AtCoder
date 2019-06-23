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

ll gcd(ll a, ll b){
  if(b == 0LL) return a;
  return gcd(b, a % b);
}

int main(){
  ll A, B;
  cin >> A >> B;
  ll a[B - A + 1];
  for(int i = 0 ; i < B - A + 1; i++){
    a[i] = A + i;
  }

  vector<ll> b; //２の倍数
  vector<ll> c; //2の倍数でない
  for(int i = 0; i < B - A + 1; i++){
    if(a[i] % 2 == 0) b.push_back(a[i]);
    else c.push_back(a[i]);
  }
  int N = b.size();
  int M = c.size();
  bool tab1[N][M];//偶数と奇数が互いに素か
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      if(gcd(b[i], c[j]) == 1) tab1[i][j] = true;
      else tab1[i][j] = false;
    }
  }

  bool tab2[M][M];//奇数が互いに素か
  for(int i=0;i<M;i++){
    for(int j=0;j<M;j++){
      if(gcd(c[i], c[j]) == 1) tab2[i][j] = true;
      else tab2[i][j] = false;
    }
  }

  ll ans = 0LL;
  //bit全探索
  for(int i = 0; i < (1 << M); i++){
    int tmp = i;
    vector<int> use;
    for(int j = 0; j < M; j++){
      if(tmp % 2 != 0) use.push_back(j);
      tmp /= 2;
    }


    bool allok = true;
    for(int j = 0; j < use.size(); j++){
      for(int k = j + 1; k < use.size(); k++){
        if(tab2[use[j]][use[k]] == false){
          allok = false;
          break;
        }
      }
    }


    if(allok){
      ans++;
      for(int j = 0; j < N; j++){
        bool alok = true;
        for(int k = 0; k < use.size(); k++){
          if(tab1[j][use[k]] == false){
            alok = false;
            break;
          }
        }
        if(alok) ans++;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
