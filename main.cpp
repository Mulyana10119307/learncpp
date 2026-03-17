#include <iostream>

int main() {
  int x{1};
  while (x <= 5) {

    int tab{5 - x};
    while (tab > 0) {
      std::cout << "  ";

      --tab;
    }

    int y{x};
    while (y >= 1) {
      std::cout << y;
      if (y > 1) {
        std::cout << ' ';
      }

      --y;
    }

    std::cout << "\n";

    ++x;
  }

  return 0;
}
