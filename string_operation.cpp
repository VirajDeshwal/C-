#include<string>
#include<fstream>
#include<iostream>

using namespace std;

    std::string name1, address1, phoneNo1;
    std::string name2, address2, phoneNo2;
int main(){
    //get user1 information
    std::cout<<"User1 what is your name?\n";
    std::getline(std::cin, name1);
     std::cout<<name1<<endl;
    std::cout<<"User1 what is your address?\n";
    std::getline(std::cin, address1);
    std::cout<<address1<<endl;
    std::cout<<"User1 what is your phone number?\n";
    std::getline(std::cin, phoneNo1);
    std::cout<<phoneNo1<<endl;

    //get user2 information
    std::cout<<"User2 what is your name?\n";
    std::getline(std::cin, name2);
    std::cout<<name2<<endl;
    std::cout<<"User2 what is your address?\n";
    std::getline(std::cin, address2);
    std::cout<<address2<<endl;
    std::cout<<"User2 what is your phone number?\n";
    std::getline(std::cin, phoneNo2);
    std::cout<<phoneNo2<<endl;

    //printing the information from users
   
    
    
    
    
    
    
 return 0;   
}