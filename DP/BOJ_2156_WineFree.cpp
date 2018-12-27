#include <iostream>
#include <stdio.h>
using namespace std;

int max(int a, int b, int c){
  return a>b?(a>c)?a:c:(b>c)?b:c;
}

int main(){
  int n;
  int dp[10001]={}, wine[10001]={};

  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> wine[i];

  dp[1] = wine[1];
  if(n > 1)
    dp[2] = wine[1] + wine[2];
  for(int i = 3; i <= n; i++)
    dp[i] = max(dp[i-1], dp[i-2]+wine[i], dp[i-3]+wine[i-1]+wine[i]);

  cout <<dp[n];
  return 0;
}
