/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */

 
 # include <iostream>
 # include <sstream>
 # include <string>
 
 using namespace std;
 
 int main(){
     std::string mystr1, mystr2;
     float height = 0;
     float width = 0;
     float area = 0;
     
     std::cout<<"The first string is: ";
     std::getline(std::cin, mystr1);
     std::cout<<mystr1<<endl;
     
     std::cout<<"The second string is: ";
     std::getline(std::cin, mystr2);
     std::cout<<mystr2<<endl;
     
     // Now let's convert the string into float
     std::stringstream(mystr1)>>height;
     std::stringstream(mystr2)>>width;
     
     area = height*width;
     std::cout<<"The area is: "<<area;
     
     
 return 0;
 }