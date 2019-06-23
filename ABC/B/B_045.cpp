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
  string sa,sb,sc;
  cin >> sa >> sb >> sc;
  int sza = sa.size();
  int szb = sb.size();
  int szc = sc.size();

  int ia = 0;
  int ib = 0;
  int ic = 0;
  char nxt = 'a';
  while(1){
    if(ia == sza && nxt == 'a'){
      cout << "A" << endl;
      return 0;
    }
    if(ib == szb && nxt == 'b'){
      cout << "B" << endl;
      return 0;
    }
    if(ic == szc && nxt == 'c'){
      cout << "C" << endl;
      return 0;
    }

    if(nxt == 'a'){
      nxt = sa[ia];
      ia++;
    }
    else if(nxt == 'b'){
      nxt = sb[ib];
      ib++;
    }
    else if(nxt == 'c'){
      nxt = sc[ic];
      ic++;
    }

    //cout << ia << ib << ic << endl;
  }
}
