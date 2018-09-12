#pragma once

#include<iostream>

void dummy()
{
    /*********************************************************************
    *
    *    This is a simple implementation of string concatenation from
    *    a vector of strings using C++ library function std::copy
    *
    **********************************************************************/
    std::string words = "Class 808X";
    std::vector<std::string> words_vec(25,words);
    std::ostringstream outputstring;
    std::copy(words_vec.begin(), words_vec.end(), std::ostream_iterator<string>(outputstring));
    std::cout<<outputstring.str()<<std::endl;
}
