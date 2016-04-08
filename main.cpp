#include <cstdlib>
#include <iostream>
#include <string>

#include "fuffa.hpp"

int main()
{
  std::string print_out = message();

  std::cout << print_out << std::endl;

  return EXIT_SUCCESS;
}
