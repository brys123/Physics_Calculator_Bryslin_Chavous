//Bryslin Chavous
//Programming C++ II
//11/29/2020
//Dr. Tyson McMillan - TCCD
//Physics calculator
//I learned how to call header files and implement source code

#include <iostream>
#include "functions.h" //reference the header file 
 
int main() 
{
  string option = ""; //the option local to int main()
  string color = "\x1b[" + to_string(32) + ";1m";
  string reset = "\x1b[0m";
  //loop until the user provides "e" or (&&) "E" as exit condition
  
  do
  {
    showMenu(); //call a menu void function here
    cout << "\nPlease enter an option: ";
    //cin >> option; //getline(cin,option); //get the entire line
    cout << color; //change text to green 
    option = validateString(option); 
    cout << reset; //reset back to standard
    handleOption(option); //call handleOption and pass the user option as an argument
    
  
  }while(option != "f" && option != "F"); //DeMorgan's Law!!! 
  cout << "\nPROGRAM TERMINATED" << endl;
  return 0; 
}