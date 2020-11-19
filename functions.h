/* A header file to hold the 
main defintions of the program
Student: You
Teacher: Dr_T 10-17-2019, updated 3-24-2020 (clear screen methods for Ubuntu)
*/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
//put libraries here
#include <iostream>
#include<string>
#include "Input_Validation_Extended.h" 
using namespace std;

//put prototypes here
void handleOption(string); //function prototype 
void hsubOption(string);
void showMenu();
void showSubmenu();
int divideFormula(int,int);

//put definitions here
void handleOption(string userOption)
{
    //variables
    int x = 0, y = 0;
    string suboption = "";


    if(userOption == "A" || userOption == "a")
    {
      cout << "\nVelocity = miles/hour\n";
      cout << "\nHow many miles did the car travel?: ";
      x = validateInt(x); //cin >> miles;
      cout << "\nHow many hours did the car travel for? ";
      y = validateInt(y); //cin >> hours;
      
      //call the divideFormula function
      cout << "\nThe velocity of the car is " << divideFormula(x,y) << "." << endl;
    }
    else if(userOption == "B" || userOption == "b")
    {
      cout << "\nAcceleration = velocity/seconds" << endl; 
      cout << "\nWhat is the velocity of the car?: ";
      x = validateInt(x); //cin >> velocity;
      cout << "\nHow many seconds did the car travel for? ";
      y = validateInt(y); //cin >> seconds;

      //call the divideFormula function
      cout << "\nThe acceleration of the car is " << divideFormula(x,y) << "." << endl;
    }
    else if(userOption == "C" || userOption == "c")//MOTION SUB MENU
    {
      
      showSubmenu();
      cout << "Please select an option: " << endl;
      suboption = validateString(suboption);
      hsubOption(suboption); //call handleOption and pass the user option as an argument
      
    }
    else if(userOption == "D" || userOption == "d")
    { 
      cout << "\nIt's min/max time ya'll" << endl ;

    }
    else if(userOption == "E" || userOption == "e")
    { 
      cout << "\nIt's min/max time ya'll" << endl ;

    }
    else if(userOption == "X" || userOption == "x")
    {
      string reset = "\x1b[0m";
      //Linux Umbunu
      cout << reset; 
      cout << "\033[2J\033[1;1H";  //for ubuntu Linux Option 1 of 2
      //Windows: system("cls"); 
      system("clear"); //for ubuntu Linux Option 2 of 2
    }
    else if(userOption == "F" || userOption == "f")
    {
      char answer = '\0';

      cout << "\nPlease enter A or B: ";
      answer = validateChar(answer); 

      if(answer == 'A')
      {
        cout << "\nEnd program. Hasta la vista, Baby!!" << endl;
      }
      else if (answer == 'B')
      {
        cout << "\nGreen Tea" << endl; 
      }

    }
    else
    {
      cout << "\nInvalid input: try again." << endl; 
    }
}

void hsubOption(string userOption)
{
    //variables
    int x = 0, y = 0;
    string suboption = "";


    if(userOption == "A" || userOption == "a")
    {
      cout << "\nsolve for v\n";
      cout << "\nHow many miles did the car travel?: ";
      x = validateInt(x); //cin >> miles;
      cout << "\nHow many hours did the car travel for? ";
      y = validateInt(y); //cin >> hours;
      
      //call the divideFormula function
      cout << "\nThe velocity of the car is " << divideFormula(x,y) << "." << endl;
    }
    else if(userOption == "B" || userOption == "b")
    {
      cout << "\nAcceleration = velocity/seconds" << endl; 
      cout << "\nWhat is the velocity of the car?: ";
      x = validateInt(x); //cin >> velocity;
      cout << "\nHow many seconds did the car travel for? ";
      y = validateInt(y); //cin >> seconds;

      //call the divideFormula function
      cout << "\nThe acceleration of the car is " << divideFormula(x,y) << "." << endl;
    }
    else if(userOption == "C" || userOption == "c")//MOTION SUB MENU
    {
      
      showSubmenu();
      cout << "Please select an option: " << endl;
      suboption = validateString(suboption);
      handleOption(suboption); //call handleOption and pass the user option as an argument
      
    }
    else if(userOption == "D" || userOption == "d")
    { 
      cout << "\nIt's min/max time ya'll" << endl ;

    }
    else if(userOption == "E" || userOption == "e")
    { 
      cout << "\nIt's min/max time ya'll" << endl ;

    }
    else if(userOption == "X" || userOption == "x")
    {
      string reset = "\x1b[0m";
      //Linux Umbunu
      cout << reset; 
      cout << "\033[2J\033[1;1H";  //for ubuntu Linux Option 1 of 2
      //Windows: system("cls"); 
      system("clear"); //for ubuntu Linux Option 2 of 2
    }
    else if(userOption == "F" || userOption == "f")
    {
      char answer = '\0';

      cout << "\nPlease enter A or B: ";
      answer = validateChar(answer); 

      if(answer == 'A')
      {
        cout << "\nEnd program. Hasta la vista, Baby!!" << endl;
      }
      else if (answer == 'B')
      {
        cout << "\nGreen Tea" << endl; 
      }

    }
    else
    {
      cout << "\nInvalid input: try again." << endl; 
    }
}

void showMenu()
{
  cout << "\nPHYSICS CALCULATOR 1.0" << endl; 
  cout << "A: calculate the velocity of a car" <<endl; 
  cout << "B: calculate the acceleration of a car" << endl; 
  cout << "C: calculate motion" << endl; 
  cout << "D: calculate the weight of an object" << endl; 
  cout << "E: calculate momentum" << endl; 
  cout << "F: exit" << endl;
  cout << "X: clear the screen" << endl;  
}
void showSubmenu()
{
  cout << "\nMOTION SUB MENU" << endl; 
  cout << "A: Ma" <<endl; 
  cout << "B: ms" << endl; 
  cout << "C: Mv2" << endl; 
  cout << "D: mv" << endl;
  cout << "X: clear the screen" << endl;  
}
//definintion 

int divideFormula(int x,int y)
{
  int answer;

  answer = x/y;
  return answer;
}

#endif