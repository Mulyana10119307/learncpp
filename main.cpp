#include <iostream>

int main() {
  int x{5};
  while (x >= 1) {

    int y{x};
    while (y >= 1) {

      std::cout << y;
      if (y > 1) {
        std::cout << ' ';
      }

      --y;
    }

    std::cout << "\n";

    --x;
  }

  return 0;
}
