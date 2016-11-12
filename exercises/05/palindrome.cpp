#include <iostream>

using std::cout;
using std::cin;

int add_digit(int number, int digit) {
  return number * 10 + digit;
}

int last_digit(int number) {
  return number % 10;
}

int cut_last_digit(int number) {
  return number / 10;
}

int reverse_number(int number) {
  int number_reversed = 0;

  while (number > 0) {
    number_reversed = add_digit(number_reversed, last_digit(number));
    number = cut_last_digit(number);
  }

  return number_reversed;
}

bool is_palindrome(int number) {
  return number == reverse_number(number);
}

int main() {
  int number;
  cout << "Enter a natural number: ";
  cin >> number;

  cout << number
       << (is_palindrome(number) ? " is" : " isn't")
       << " a palindrome.\n";

  return 0;
}
