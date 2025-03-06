#include <iostream>
// code -> compiler -> machine code
// compiler -> errors and warnings

// errors -> syntax errors
// warnings -> logical errors


int main(int argc, char const *argv[])
{
  // Compile time error
  // std::cout << "Hello, World!" << std::endl  no semicolon provided 

  // runtime error (Warning)
  int value = 20/0;
  
  std::cout << "value : " << value << std::endl; // runtime error

  return 0;
}
