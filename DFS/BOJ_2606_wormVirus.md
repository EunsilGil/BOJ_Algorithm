# BOJ 2606 바이러스

## Fact

1. 한 컴퓨터가 웜 바이러스에 걸리면 그 컴퓨터와 네트워크 상에서 연결되어 있는 모든 컴퓨터는 웜 바이러스에 걸리게 된다.
2. 네트워크상 연결되어 있지 않는 컴퓨터는 전혀 영향을 받지 않는다.

- 입력
  1. 컴퓨터의 수 (100이하, 각 컴퓨터에는 1번부터 차례로 번호가 매겨진다.)
  2. 네트워크 상에 직접 연결되어 있는 컴퓨터 쌍의 수
  3. 네트워트 상에서 직접 연결돠어 있는 컴퓨터의 번호 쌍
- 출력
  1. 1번 컴퓨터가 웜 바이러스에 걸렸을 때, 1번 컴퓨터를 통해 웜 바이러스에 걸리게 되는 컴퓨터의 수

## Overview

컴퓨터의 수와 네트워크 상에서 서로 연결되어 있는 정보가 주어질 때, 1번 컴퓨터를 통해 웜 바이러스에 걸리게 되는 컴퓨터의 수를 출력하는 프로그램

## Algorithm

- vertex(컴퓨터)와 edge(네트워크)가 존재하므로 graph를 사용
  - [인접 리스트(adjacency list)](https://github.com/EunsilGil/Data-Structure/blob/master/Graph/explanation.md) 구현 
  - 인접 리스트로 구현하는 것이 인접 행렬보다 탐색 시간을 줄일 수 있음
- edge(네트워크)를 통해 연결되어 있는 모든 vertex(컴퓨터)의 갯수를 구해야 하므로 graph search방법 중 DFS 사용
  - [Graph Search에 대한 설명](https://github.com/EunsilGil/Data-Structure/blob/master/Graph/Graph%20Search/explanation.md)
- 기본적인 DFS algorithm에 false일 때마다 count해주는 int형 변수 하나만 도입하면 된다.

### Time Complexity

O(v+e)

### Space Complexity

O(n)
