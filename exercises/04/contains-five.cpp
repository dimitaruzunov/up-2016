#include <iostream>

using std::cout;
using std::cin;

int main() {
  int number;
  cout << "Enter a natural number: ";
  cin >> number;

  int number_copy = number;
  int last_digit;
  do {
    last_digit = number_copy % 10;
    number_copy /= 10;
  } while (last_digit != 5 && number_copy > 0);

  cout << number
       << (last_digit == 5 ? " contains" : " doesn't contain")
       << " 5.\n";

  return 0;
}
