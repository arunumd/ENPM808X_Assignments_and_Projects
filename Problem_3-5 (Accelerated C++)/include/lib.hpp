#pragma once

// Solution for Problem 3-5 on Accelerated C++ Book
#include <iostream>
#include <string>
#include <memory>
#include <algorithm>
#include <vector>


//Class for student grades calculation
class Grades{
    /*******************************************************
    *
    *  This is a class for calculation of student's final
    *  grades based on their assignment, mid-term and 
    *  final-exam grades
    *
    ********************************************************/
    typedef std::vector<double>::size_type hw_vec_sz;
public:
    bool studentName(){
        std::cout<<"Enter student name :"<<std::endl;
        std::cin>>student_name;
        return true;
    }
    void finalExamGrade(){
        std::cout<<"Enter final exam grade :"<<std::endl;
        std::cin>>final_exam_grade;
    }
    void midTermGrade(){
        std::cout<<"Enter mid-term exam grade :"<<std::endl;
        std::cin>>mid_term_grade;
    }
    void homeworkGrades(){
    std::cout<<"Enter the five homework grades below :\n";
        while (i < 5){ //C++11 range based for loop
            std::cin>>homework_grade;
            hw_grades_vec.push_back(homework_grade);
      ++i;
        }
    }
    void finalGradeCalculator(){
        hw_vec_sz length = hw_grades_vec.size();
        hw_vec_sz midpt = length/2;
        median = length % 2 == 0 ? (hw_grades_vec[midpt] + hw_grades_vec[midpt-1]) /2 : hw_grades_vec[midpt];
        final_grade = 0.35 * mid_term_grade + 0.5 * final_exam_grade + 0.15 * median;
    }
    void gradesLedger(){
        student_names_vec.push_back(student_name);
        final_grades_vec.push_back(final_grade);
    std::cout<<"The final grade for "<<student_name<<" is : "<<final_grade<<"\n\n"<<std::endl;
    }

private:
    std::string student_name;
    double median, final_grade, homework_grade, final_exam_grade, mid_term_grade;
  int i = 0;
    std::vector<double> hw_grades_vec;
    std::vector<double> final_grades_vec;
    std::vector<std::string> student_names_vec;
};
