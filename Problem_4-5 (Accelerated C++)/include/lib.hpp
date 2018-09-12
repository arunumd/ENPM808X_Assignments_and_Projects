#pragma once

// Solution for Problem 4-5 on Accelerated C++ Book
#include <iostream>
#include <string>
#include <memory>
#include <algorithm>
#include <vector>


//Class for student grades calculation
class UniqueNames{
    /*************************************************************
    *
    *       This is a class for getting nouns; and sorting and
    *       display of word frequency   
    *
    **************************************************************/
    typedef std::vector<std::string>::size_type names_vec_sz;
public:
    bool nameGetter(){
        std::cin>>name;
        names_vec.push_back(name);
        return true;
        }

    void uniqueNamesFetcher(){
        std::sort(names_vec.begin(), names_vec.end(), [](const std::string a, const std::string b) {return a > b; });
        for(std::vector<std::string>::const_iterator it = names_vec.begin(); it != names_vec.end(); ++it){
            if (it == names_vec.begin()){
                current_word = *it;
            }
            else{
                next_word = *it;
            }
            if (current_word == next_word){
                ++counter;
            }
            else{
                std::cout<<"The word "<<current_word<<" occured "<<counter<<" times in the input !"<<std::endl;
                current_word = next_word;
                counter = 0;
            }
        }
    }

private:
    std::string name;
    std::vector<std::string> names_vec;
    std::string current_word, next_word;
    int counter = 0;
    int i = 0;
};
