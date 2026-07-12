#include <iostream>

int main() {
  int year ;
  std::cout << " Enter a year :\n";
  std::cin >> year ;

  if(year<9999 && year>999){
    if(year/4 == 0){
      std::cout << " leap year..\n " ;
    }
    else if(year%100 == 0 && year%400 != 0  ){
      std::cout << " NOT a leap year ..\n" ;
    }
    else if(year%400 == 0){
      std::cout << " a leap year ..\n";
    }
    else{
      std::cout << " NOT leap year .." ;
    }
  }
  else {
    std::cout << " enter a valid year ..";
  }


  
  
}
