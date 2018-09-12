#include <iostream>
#include <lib.hpp>

int main(){
  Grades Points;
  while (Points.studentName()){
    Points.finalExamGrade();
    Points.midTermGrade();
    //Now we pull in five homework grades for every student
    Points.homeworkGrades();
    Points.finalGradeCalculator();
    Points.gradesLedger();
  }
  return 0;
}
