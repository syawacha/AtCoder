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

#define INF 1000000000;

int main(){
  int D,G;
  cin >> D >> G;
  int p[D],c[D];
  for(int i=0;i<D;i++){
    cin >> p[i] >> c[i];
  }

  int ans=INF;
  for(int i=0 ; i< (1 << D) ; i++){
    int itmp = i;
    vector<int> use;
    vector<int> unuse;
    for(int j=0;j<D;j++){
      if(itmp%2 == 1) use.push_back(j);
      else unuse.push_back(j);
      itmp/=2;
    }

    /*cout << "use:";
    for(int j=0;j<use.size();j++){
      cout << use[j] ;
    }
    cout << endl;*/
    reverse(unuse.begin(),unuse.end());
    /*cout << "unuse:";
    for(int j=0;j<unuse.size();j++){
      cout << unuse[j] ;
    }
    cout << endl;*/

    int score=0;
    int res=0;
    for(int j=0;j<use.size();j++){
      res+=p[use[j]];
      score+=p[use[j]]*(use[j]+1)*100;
      score+=c[use[j]];
    }

    if(score>=G){
      //cout << "res=" << res << endl;
    //  cout << "score=" << score << endl;
    //  cout << endl;
      ans=min(ans,res);
      continue;
    }else{
      int pcpy[D];
      for(int j=0;j<D;j++) pcpy[j]=p[j];
      int jtmp = 0;
      while(score<G){
        if(jtmp==unuse.size()-1 && pcpy[unuse[jtmp]]==0) break;
        if(pcpy[unuse[jtmp]]>0){
          //cout << 'a';
          score+=(unuse[jtmp]+1)*100;
          res++;
          pcpy[unuse[jtmp]]--;
        }else{
          //cout << 'b';
          score += c[unuse[jtmp]];
          jtmp++;
        }
      }
      //cout << "res=" << res << endl;
      //cout << "score=" << score << endl;
      //cout << endl;
      ans = min(ans,res);
    }
  }
  cout << ans << endl;
  return 0;
}
