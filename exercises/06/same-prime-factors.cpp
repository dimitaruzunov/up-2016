#include <iostream>

using std::cout;
using std::boolalpha;

bool is_factor(int factor, int number) {
  return number % factor == 0;
}

bool is_prime(int number) {
  if (number == 2) {
    return true;
  }

  for (int i = 2; i < number; ++i) {
    if (is_factor(i, number)) {
      return false;
    }
  }

  return true;
}

bool is_prime_factor(int factor, int number) {
  return is_factor(factor, number) && is_prime(factor);
}

bool has_prime_factors_of(int number1, int number2) {
  for (int i = 2; i <= number2; ++i) {
    if (is_prime_factor(i, number2) && !is_factor(i, number1)) {
      return false;
    }
  }

  return true;
}

bool has_same_prime_factors(int number1, int number2) {
  return has_prime_factors_of(number1, number2) &&
         has_prime_factors_of(number2, number1);
}

int main() {
  cout << boolalpha << has_same_prime_factors(10, 20) << '\n';
  cout << boolalpha << has_same_prime_factors(10, 60) << '\n';

  return 0;
}