#include <bits/stdc++.h> // 모든 표준 라이브러리 포함
using namespace std;

int main(void) {
  ios::sync_with_stdio(0); // C와 C++의 입출력 동기화 비활성화 -> 속도 향상
  cin.tie(0); // cin과 cout의 연결 끊음 -> cout 전에 cin을 기다리지 않음

  int n; // 명령어 개수
  cin >> n;

  stack<int> S; // 정수형 스택 선언

  while(n--){ // n번 반복하여 명령어 처리
    string c; // 명령어를 저장할 문자열
    cin >> c;

    if(c == "push"){ // push 명령어
      int t;
      cin >> t; // 값을 입력받아
      S.push(t); // 스택에 넣음
    }
    else if(c == "pop"){ // pop 명령어
      if(S.empty()) // 스택이 비어있으면
        cout << -1 << '\n'; // -1 출력
      else{
        cout << S.top() << '\n'; // 가장 위의 값 출력
        S.pop(); // 스택에서 제거
      }
    }
    else if(c == "size") // size 명령어
      cout << S.size() << '\n'; // 스택의 크기 출력
    else if(c == "empty") // empty 명령어
      cout << (int)S.empty() << '\n'; // 비어있으면 1, 아니면 0 출력
    else{ // top 명령어
      if(S.empty()) // 스택이 비어있으면
        cout << -1 << '\n'; // -1 출력
      else
        cout << S.top() << '\n'; // 가장 위의 값 출력
    }
  }
}
