#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

class Average{
    /*************************************************************
    *
    *  This is a class for grabbing in numbers from user input
    *  and then displaying the average of all the input numbers
    *
    **************************************************************/
    typedef std::vector<double>::size_type vec_sz;
public:
    void getNumbers(double number){
        num_vec.emplace_back(number);
    }
    void averageOutput(){
        vec_sz count = num_vec.size();
        for (auto i : num_vec)
            total += i;
        std::cout<<"The average is : "<<total / count<<std::endl;
    }

private:
    double number;
    std::vector<double> num_vec;
    vec_sz count;
    double total = 0;
};
