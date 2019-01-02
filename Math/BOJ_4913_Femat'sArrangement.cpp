#include <stdio.h>
#include <math.h>
#include <iostream>
#include <vector>

using namespace std;
#define MAX 1000001

int a1[MAX];
vector<int> a2;
int L, U, pCount, rCount;

int main(void) {
  for(int i = 2; i <= MAX; i++)
    a1[i] = i;
  for(int i = 2; i <= (int)sqrt(MAX); i ++) {
	  for(int j = i*2 ; j <= MAX ; j += i) {
     if(a1[i] == 0)
      continue;
	   else if(a1[j]%i == 0)
      a1[j] = 0;
    }
  }
  for(int i = 2 ; i <= MAX ; i++){
      if(a1[i] != 0)
        a2.push_back(a1[i]);
  }

  while(1){
    cin >> L >> U;
    if((L == -1) && (U == -1))
      break;

    pCount = 0;
    rCount = 0;
    for(int i = 0; (i < a2.size())&&(a2[i] <= U); i++){
      if(a2[i] < L)
        continue;
      pCount++;
      if ((a2[i] != 0)&&(a2[i] % 4 == 1))
        rCount++;
    }
    if((L<=2)&&(U>=2))
      rCount++;
    cout << L <<" "<< U <<" "<< pCount <<" "<< rCount << endl;
  }
  return 0;
}
