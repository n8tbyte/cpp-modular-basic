#include <iostream>
#include "calculator.h"

int main() {
  int a = 25, b = 3;

  int sum = add(a, b);
  std::cout << a << " + " << b << " = " << sum << std::endl;

  int difference = subtract(a, b);
  std::cout << a << " - " << b << " = " << difference << std::endl;

  int product = multiply(a, b);
  std::cout << a << " * " << b << " = " << product << std::endl;

  int quotient = divide(a, b);
  std::cout << a << " / " << b << " = " << quotient << std::endl;

  return 0;
}