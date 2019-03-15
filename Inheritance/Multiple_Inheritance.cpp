#include"Multiple_inheritance.hpp"

int main()
{
    TA t1;
    t1.setSupervision("Mr. Gattu");
    t1.setId(66666);
    t1.setTitle("Chor");

    std::cout<<t1.getSupervision()<<"  "<<t1.getId()<<"  "<<t1.getTitle()<<"\n\n\n";
    return 0;
}