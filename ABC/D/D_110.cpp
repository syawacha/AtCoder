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

const long long MOD = 1e9 + 7;

class Combination {
    //a^p%mod
    ll powmod(ll a, ll p) {
        ll ans = 1LL;
        ll mul = a;
        // p >>=1 <-> p=(p >> 1)
        for (; p > 0; p >>= 1, mul = (mul * mul) % mod) {
            if ((p & 1) == 1) ans = (ans * mul) % mod;
        }

        return ans;
    }
public:
    int N;
    ll mod;
    vector<ll> fact;
    vector<ll> revFact;

    Combination(int n, ll m) : N(n), mod(m), fact(n+1), revFact(n+1) {
        fact[0] = 1;
        for (int i = 1; i <= N; i++) {
            fact[i] = fact[i-1] * i;
            fact[i] %= mod;
        }

        // Fermat's little theorem
        revFact[N] = powmod(fact[N], mod - 2);

        for (int i = N-1; i >= 0; i--) {
            revFact[i] = revFact[i+1] * (i+1);
            revFact[i] %= mod;
        }
    }

    ll get(int a, int b) {
        if (a < 0 || b < 0) return 0;
        if (b > a) return 0;
        return (((fact[a] * revFact[b]) % mod) * revFact[a-b]) % mod;
    }
};

map<int, int> prime_factor(int n) {
    map<int, int> ret;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            ret[i]++;
            n /= i;
        }
    }

    if (n != 1) ret[n] = 1;
    return move(ret);
};

int main(){
  int N, M;
  cin >> N >> M;

  map<int,int> mp = prime_factor(M);
  /*r(auto itr=mp.begin();itr!=mp.end();itr++){
    cout << itr->first << " " << itr->second << endl;
  }*/

  Combination comb(100100,MOD);

  ll ans=1LL;
  for(auto itr=mp.begin();itr!=mp.end();itr++){
    int cnt = itr->second;

    ans*=comb.get(N+cnt-1,cnt);
    ans%=MOD;
  }

  cout << ans << endl;
}
