#include "cat.hpp"

int main()
{
    //Defining the objects for class Cats.
    Cats cat1;
    Cats cat2; 
    Cats cat3;

    //Initializing the parameters using SET() functions.

    //For cat1
    cat1.setAge(1);
    cat1.setName("bob");
    cat1.setBreed("desi");

    //For cat2
    cat2.setName("tom");
    cat2.setBreed("langda");
    cat2.setAge(2);

    //for cat3
    cat3.setName("jerry");
    cat3.setBreed("billa");
    cat3.setAge(3);

    //Printing the info using printInfo()
    cat1.printInfo();
    std::cout<<"\n\n";
    
    cat2.printInfo();
    std::cout<<"\n\n";

    cat3.printInfo();
    std::cout<<"\n\n";
}