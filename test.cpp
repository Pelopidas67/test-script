#include <iostream>
#include <vector>
#include <memory>
#include <cstdio>

int main() {
   try {
       std::vector<double> vec = {12.34, 34.89, 0.89};
       double val = vec.at(1);
       
       std::cout << "value: " << val << std::endl;
   }
   catch(const std::exception& e) {
       std::cerr << "ERROR: " << e.what() << std::endl;
   }

   return 0;
}
