#include <iostream>

using std::cin;
using std::cout;

int main() {
  char operation;
  cout << "Choose an operation (+, -, *, /): ";
  cin >> operation;

  double first_operand;
  double second_operand;
  cout << "Enter your operands: ";
  cin >> first_operand >> second_operand;

  double result;

  switch (operation) {
    case '+':
      result = first_operand + second_operand;
      break;
    case '-':
      result = first_operand - second_operand;
      break;
    case '*':
      result = first_operand * second_operand;
      break;
    case '/':
      result = first_operand / second_operand;
      break;
    default:
      cout << "Unknown operation " << operation << '\n';
      return 1;
  }

  cout << first_operand << ' '
       << operation << ' '
       << second_operand << " = "
       << result << '\n';

  return 0;
}
