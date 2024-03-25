#include <iostream>

using namespace std;

int main() {
  // Lendo a entrada do exercício
  int P1, C1, P2, C2;
  cin >> P1 >> C1 >> P2 >> C2;

  // Seu código vai aqui
  if (10 <= P1 && P1 <= 100 && 10 <= C1 && C1 <= 100 && 10 <= P2 && P2 <= 100 &&
      10 <= C2 && C2 <= 100) {
    if (P1 * C1 == P2 * C2) {
      cout << "0" << endl;
    } else if (P1 * C1 > P2 * C2) {
      cout << "-1" << endl;
    } else if (P1 * C1 < P2 * C2) {
      cout << "1" << endl;
    }
    return 0;
  }
}