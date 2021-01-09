#include "lib/fibonacci.h"
#include <iostream>

int main(int argc, char *argv[])
{
   const auto fact{Fibonacci(40)};


   std::cout << fact << std::endl;
   return 0;
}
