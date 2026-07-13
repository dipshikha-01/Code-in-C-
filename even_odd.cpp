#include<iostream>
#include<vector>
int main(){
  int total_even = 0;
  int total_odd = 1;
  std::vector<int> vector = {2 , 4 , 3 , 6 , 1 , 9};
  for(int i=0 ; i<vector.size() ; i++){
    if (vector[i]%2 == 0){
      total_even = total_even + vector[i] ;
    }
    else{
      total_odd = total_odd + vector[i] ;
    }
   
    
  }
   std::cout << " sum of even numbers : " << total_even << "\n" ;
    std::cout << " sum of odd numbers : " << total_odd << "\n" ;
return 0;
}
