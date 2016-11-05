#include <iostream>

using std::cout;
using std::cin;

int main() {
  int number;
  cout << "Enter a natural number: ";
  cin >> number;

  int sum_of_digits = 0;

  int number_copy = number;
  while (number_copy > 0) {
    int last_digit = number_copy % 10;
    sum_of_digits += last_digit;

    number_copy /= 10;
  }

  cout << "The sum of digits of " << number << " is " << sum_of_digits << '\n';

  return 0;
}
