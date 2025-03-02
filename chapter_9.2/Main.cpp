#include <iostream>
#include <vector>
#include "Name_pairs.h"

int main(){
    std::cout<<"How many names you would like to enter?"<<std::endl;
    int number_of_names;
    std::cin>>number_of_names;
    Name_pairs base;
    for(int i=0; i<number_of_names; i++){
        std::cout<<"Enter "<<i+1<<" name:"<<std::endl;
        base.read_names();
    }
    base.read_ages();
    std::cout<<std::endl;
    std::cout<<"Before Sorting: "<<std::endl;
    base.print();
    std::cout<<std::endl;
    base.sort_names_abc();
    std::cout<<"After Sorting: "<<std::endl;
    base.print();
    return 0;
}

