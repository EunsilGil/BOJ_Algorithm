#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

vector<int> com[101];
bool visit[101];
int count = 0;

void DFS(int v) {
  visit[v] = true;

  for (int i = 0; i < com[v].size(); i++) {
    int next = com[v][i];
    if (visit[next] == false){
      count++;
      DFS(next);
    }
  }
}

int main(){
  int n, edge;
  int a, b;
  cin >> n >>edge;
  for(int i = 0; i < edge; i++){
    cin >> a >> b;
    com[a].push_back(b);
    com[b].push_back(a);
  }

  DFS(1);
  cout << count;
  return 0;
}
