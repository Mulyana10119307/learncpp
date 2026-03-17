#include <iostream>

int main() {
  std::cout << "ASCII code  | letter\n";

  char letter{'a'};
  while (letter <= 'z') {
    std::cout << static_cast<int>(letter) << "  | " << letter << "\n";

    ++letter;
  }

  return 0;
}
