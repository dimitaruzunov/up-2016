#include <iostream>

using std::cout;
using std::cin;

int main() {
  int number;
  cout << "Enter a natural number: ";
  cin >> number;

  int number_reversed = 0;

  int number_copy = number;
  while (number_copy > 0) {
    int last_digit = number_copy % 10;
    number_reversed = number_reversed * 10 + last_digit;

    number_copy /= 10;
  }

  cout << "The reverse of " << number << " is " << number_reversed << '\n';

  return 0;
}
