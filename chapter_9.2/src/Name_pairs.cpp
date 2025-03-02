#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include "Name_pairs.h"

void Name_pairs::read_names(){
        std::string new_name;
        std::cin>>new_name;
        names.push_back(new_name);
    }
    void Name_pairs::read_ages (){
        std::cout<<"Please enter the age of every person you mentioned:"<<std::endl;
        int new_age;
        int i=0;
        for(std::string n: names){
            std::cout<<"Enter the age of "<<names[i]<<std::endl;
            std::cin>>new_age;
            ages.push_back(new_age);
            i++;
        }
    }
    void Name_pairs::print() const{
        int i=0;
        for(std::string n: names){
            std::cout<<"Name: "<<names[i]<<"      Age: "<<ages[i]<<std::endl;
            i++;
        }
    }

void Name_pairs::sort_names_abc() {
    std::vector<std::string> sorted_names = names;
    std::vector<double> sorted_ages(ages.size());

    std::sort(sorted_names.begin(), sorted_names.end());

    for (size_t i = 0; i < sorted_names.size(); ++i) {
        for (size_t j = 0; j < names.size(); ++j) {
            if (sorted_names[i] == names[j]) {
                sorted_ages[i] = ages[j];
                break;
            }
        }
    }

    names = sorted_names;
    ages = sorted_ages;
}