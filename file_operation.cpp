#include <iostream>
#include<fstream>
#include<string>

using namespace std;

std::string name, address, phone;

int main(){

// create a file
    fstream myfile("practice.txt", ios::app);
    if (myfile.is_open()){

        myfile<<"Hey I am writing to see if it is working";
        myfile.close();
    }
    else std::cout<<"Unable to locate the file";

// creating a database stream for users query
    fstream myfile1 ("practice.txt");
    if (myfile1.is_open()){
        myfile1<<"Viraj"<<endl;
        myfile1<<"2404 Nutwood Ave"<<endl;
        myfile1<<"6574459633\n";
        myfile1.close();
    }
    else std::cout<<"Unable to locate the file";

// create the queries for user
std::cout<<"What is your name?"<<endl;
std::getline(std::cin, name);
std::cout<<name;
std::cout<<"What is your address?"<<endl;
std::getline(std::cin,address);
std::cout<<address;
std::cout<<"What is your phone number?"<<endl;
std::getline(std::cin, phone);
std::cout<<phone;

return 0;
}