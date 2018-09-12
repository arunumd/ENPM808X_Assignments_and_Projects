#include <iostream>
#include <lib.hpp>

int main(){
  UniqueNames NameIntelligence;
  std::cout<<"Please enter the names below :"<<std::endl;
  while(NameIntelligence.nameGetter()){
    NameIntelligence.nameGetter();
  }
  NameIntelligence.uniqueNamesFetcher();
  return 0;
}

