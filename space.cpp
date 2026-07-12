#include <iostream>

int main() {
  double weight ;
  int x;

  std::cout << "Please enter your current weight..\n";
  std::cin >> weight ;

  std::cout << " 1. Mercury  2. Venus  3. Mars \n ";
  std::cout << " 4. Jupiter  5. Saturn  6. Uranus \n";
  std::cout << "7. Neptune \n";

  std::cout << " enter the number according to which planet are you visiting ..\n" ;
  std::cin >> x ;

  if (x==1){
    std::cout << "weight in Mercury : weight * 0.38\n";
  }
  else if(x==2){
    std::cout << "weight in Venus : weight * 0.91\n";
  }
  else if(x==3){
    std::cout << "weight in Mars : weight * 0.38\n";
  }
  else if(x==4){
    std::cout << "weight in Jupiter : weight * 2.34\n";
  }
  else if(x==5){
    std::cout << "weight in Saturn : weight * 1.06\n";
  }
  else if(x==6){
    std::cout << "weight in Uranus : weight * 0.92\n";
  }
  else if(x==7){
    std::cout << "weight in Neptune : weight * 1.19\n";
  }
 

}
