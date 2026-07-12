#include <iostream>

int main() {
 double pesos ;
 double reais ;
 double soles ; 
 double dollars ;
 std::cout << "Enter number of colombian pesos :";
 std::cin >> pesos ;
 std::cout << "Enter number of colombian reais :";
 std::cin >> reais;
 std::cout << "Enter number of colombian soles :";
 std::cin >> soles ;
 dollars = (0.00032*pesos)+(0.27*reais)+(0.3*soles);
 std::cout << "US DOLLARS = " << dollars <<"\n" ;
}
