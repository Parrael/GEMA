#include <iostream>

using namespace std;

int main() {
  // Lendo a entrada do exercício
  int A, M;
  cin >> A >> M;

  // Seu código vai aqui
  if (1 <= A && A <= 50 && 1 <= M && M <= 50 && A + M <= 50) {
    cout << "S";
  } else {
    cout << "N";
  }
  return 0;
}
