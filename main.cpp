#include <iostream>

int calculate(int x, int y, char op);
int getInteger();
char getOperator();

int main() {
  int x{getInteger()};
  int y{getInteger()};
  char op{getOperator()};

  int result{calculate(x, y, op)};

  std::cout << x << ' ' << op << ' ' << y << " = " << result << "\n";

  return 0;
}

int calculate(int x, int y, char op) {
  switch (op) {
  case '+':
    return x + y;
  case '-':
    return x - y;
  case '*':
    return x * y;
  case '/':
    return x / y;
  case '%':
    return x % y;
  default:
    std::cout << "ERROR";
    return 0;
  }
}

int getInteger() {
  std::cout << "Enter an integer: ";
  int value{};
  std::cin >> value;

  return value;
}

char getOperator() {
  std::cout << "Enter operator +, -, *, / or %: ";
  char op{};
  std::cin >> op;

  return op;
}
