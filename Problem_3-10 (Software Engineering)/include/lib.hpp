#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

class GPACalculator{
	typedef std::vector<double>::size_type vec_sz;
public:
	//This is a function for assigning a grade to an index of grades_vec
	void gradeAssign(double grade, int index){
		*(it + index -1) = grade;
	}

	void gpaEstimator(){
	//Since we do not know the metrics to be considered for GPA calculation,
	//we will be just obtaining the average of the whole vector
		vec_sz count = grades_vec.size();
		for (auto i : grades_vec)
			total += i;
		std::cout<<"The current GPA is : "<<total / count<<std::endl;
	}

private:
	double grade;
	int index;
	std::vector<double> grades_vec {79, 55, 89, 91, 42, 73, 67, 88};
	std::vector<double>::iterator it = grades_vec.begin();
	vec_sz count;
	double total = 0;
};
