//Game
#include "manager.h"
#include <iostream>
#include <vector>
int main(int,char*[]) {  // 
try {
Manager manager;
manager.play();
}
   catch (const string& msg) { std::cout << msg << std::endl; }
   catch (...) {
      std::cout << "Oops, someone threw an exception!" << std::endl;
   }
   return 0;
}
