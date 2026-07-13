#include <iostream>
#include <vector>

int main() {
  
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
  // Add more 
  grocery.push_back("black lily");
  grocery.push_back("pink forest");

  std::cout << grocery.size() << "\n" ;
  return 0;
}
