#include <iostream>
#include <lib.hpp>

int main(){
    double nummer;
    Average Calc;
  std::cout<<"Please enter the numbers below :";
    while(std::cin>>nummer){
        Calc.getNumbers(nummer);
    }
    Calc.averageOutput();
    return 0;
}
