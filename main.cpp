//
// Created by 이인성 on 2021/08/14.
//

#include <iostream>

using namespace std;

int main() {
  int cnt = 0;
  int N;
  int how_many_5;
  bool flag = true;
  cin >> N;

  if(N%5 == 0) {
    cnt += N/5;
    flag = false;
  }
  else {
    how_many_5 = N/5;
    for(int i=how_many_5; i>=0; i--) {
      int n = N - i*5;
      if(n%3 == 0) {
        cnt += i + n/3;
        flag = false;
        break;
      }
    }
  }
  if(flag) {
    cout << -1 << endl;
  }
  else {
    cout << cnt << endl;
  }
  return 0;
}