#include <iostream>
#include <lib.hpp>

int main(){
    GPACalculator Calc;
    int index;
    double student_grade;
    while(int i=1){
        std::cout<<"\n\nPlease enter the index and the grade with space separation : "<<std::endl;
        std::cin>>index>>student_grade;
        Calc.gradeAssign(student_grade, index);
        Calc.gpaEstimator();
    }
    return 0;
}