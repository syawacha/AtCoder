#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef long long int ll;

int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  if(b%a==0) printf("%d\n",a+b);
  else printf("%d\n",b-a);
  return 0;
}
