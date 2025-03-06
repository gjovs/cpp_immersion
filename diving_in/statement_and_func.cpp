#include <iostream>

int add(int a, int b) {
  return a + b;
}

int main(int argc, char const *argv[])
{
  // Statement example!
  int a = 10;
  int b = 20;

  int sum = a + b;

  std::cout << "Statement" << std::endl;


  std::cout << "Sum of " << a << " and " << b << " is " << sum << std::endl;


  
  // Function example!
  
  std::cout << "Function" << std::endl;

  int x = 10;
  int y = 150;

  int sumWithFunction = add(x, y);


  std::cout << "Sum of " << x << " and " << y << " is " << sumWithFunction << std::endl;

  return 0;
}
