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

    std::cout<<"Operator<< :"<<std::endl;
    std::cout<<base<<std::endl;

    std::cout<<"Let us create two pairs for comparing:"<<std::endl;
    Name_pairs base_for_comparing;
    std::cout<<"Enter the first name: "<<std::endl;
    base_for_comparing.read_names();
    std::cout<<"Enter an age of the first person"<<std::endl;
    base_for_comparing.read_ages();

    Name_pairs base_for_comparing2;
    std::cout<<"Enter the second name: "<<std::endl;
    base_for_comparing2.read_names();
    std::cout<<"Enter an age of the second person"<<std::endl;
    base_for_comparing2.read_ages();
    if(base_for_comparing==base_for_comparing2){
        std::cout<<"They are the same!"<<std::endl;
    }
    else{
        std::cout<<"They are different!"<<std::endl;
    }
    if(base_for_comparing!=base_for_comparing2){
        std::cout<<"They are different!"<<std::endl;
    }
    else{
        std::cout<<"They are the same!"<<std::endl;
    }

    return 0;
}