
#include <iostream>

int main(int argc, char const *argv[])
{
  int a;
  int b;

  std::cout << "Enter two numbers: " << std::endl;

  std::cin >> a >> b;


  std::cerr << "Example of error message" << std::endl;
  std::clog << "Example of log message" << std::endl;
  

  std::string name;

  std::cout << "Enter your name: " << std::endl;

  std::getline(std::cin, name);

  // we can break in multiple lines!
  std::cout << "Hello, " 
            << name 
            << std::endl;

  return 0;
}
