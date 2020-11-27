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
double divideFormula(double,double);
double multiplyFormula(double,double);

//put definitions here
void handleOption(string userOption)
{
    //variables
    double x = 0, y = 0;
    string suboption = "";


    if(userOption == "A" || userOption == "a")
    {
      cout << "\nVelocity = miles/hour\n";
      cout << "\nHow many miles did the object travel?: ";
      x = validateDouble(x); //cin >> miles;
      cout << "\nHow many hours did the object travel for? ";
      y = validateDouble(y); //cin >> hours;
      
      //call the divideFormula function
      cout << "\n" << x << "/" << y << " = " << divideFormula(x,y) << endl;
      cout << "\nThe velocity of the object is " << divideFormula(x,y) << "." << endl;
    }
    else if(userOption == "B" || userOption == "b")
    {
      cout << "\nAcceleration = velocity/seconds\n" << endl; 
      cout << "\nWhat is the velocity of the object?: ";
      x = validateDouble(x); //cin >> velocity;
      cout << "\nHow many seconds did the object travel for? ";
      y = validateDouble(y); //cin >> seconds;

      //call the divideFormula function
      cout << "\n" << x << "/" << y << " = " << divideFormula(x,y) << endl;
      cout << "\nThe acceleration of the car is " << divideFormula(x,y) << "." << endl;
    }
    else if(userOption == "C" || userOption == "c")//MOTION SUB MENU
    {
      
      showSubmenu();
      cout << "\nPlease select an option: " << endl;
      suboption = validateString(suboption);
      hsubOption(suboption); //call handleOption and pass the user option as an argument
      
    }
    else if(userOption == "D" || userOption == "d")
    { 
      cout << "\nWeight = mass * gravity" << endl ;
      cout << "\nWhat is the mass of the object? " << endl ;
      x = validateDouble(x); //cin >> velocity;
      cout << "\nWhat is the acceleration of gravity? ";
      y = validateDouble(y); //cin >> seconds;

      //call the multiplyFormula function
      cout << "\n" << x << "*" << y << " = " << multiplyFormula(x,y) << endl;
      cout << "\nThe weight of the object is " << multiplyFormula(x,y) << "." << endl;
    }
    else if(userOption == "E" || userOption == "e")
    { 
      cout << "\nMomentum = mass * volume" << endl ;
      cout << "\nHow many kg does the object weigh? " << endl ;
      x = validateDouble(x); //cin >> weight;
      cout << "\nWhat is the volume of the object? ";
      y = validateDouble(y); //cin >> seconds;

      //call the multiplyFormula function
      cout << "\n" << x << "*" << y << " = " << multiplyFormula(x,y) << endl;
      cout << "\nThe momentum of the object is " << multiplyFormula(x,y) << "." << endl;
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

      if(answer == 'A' || answer == 'a')
      {
        cout << "\nGoodnight, until tomorrow~" << endl;
      }
      else if (answer == 'B' || answer == 'b')
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
    double x = 0, y = 0, z = 0;
    string suboption = "";


    if(userOption == "A" || userOption == "a")
    {
      cout << "\nsolve for v\n";
      cout << "\nHow many miles did the object travel?: ";
      x = validateDouble(x); //cin >> miles;
      cout << "\nHow many hours did the object travel for? ";
      y = validateDouble(y); //cin >> hours;
      
      //call the divideFormula function
      cout << "\nThe velocity of the object is " << divideFormula(x,y) << "." << endl;
    }
    else if(userOption == "B" || userOption == "b")
    {
      cout << "\nAcceleration = velocity/seconds" << endl; 
      cout << "\nWhat is the velocity of the object?: ";
      x = validateDouble(x); //cin >> velocity;
      cout << "\nHow many seconds did the object travel for? ";
      y = validateDouble(y); //cin >> seconds;

      //call the divideFormula function
      cout << "\nThe acceleration of the object is " << divideFormula(x,y) << "." << endl;
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
  cout << "A: calculate the velocity of an object" <<endl; 
  cout << "B: calculate the acceleration of an object" << endl; 
  cout << "C: calculate the motion of an object" << endl; 
  cout << "D: calculate the weight of an object" << endl; 
  cout << "E: calculate the momentum of an object" << endl; 
  cout << "F: exit" << endl;
  cout << "X: clear the screen" << endl;  
}
void showSubmenu()
{
  cout << "\nMOTION SUB MENU" << endl; 
  cout << "A: Ma = solve for v" <<endl; 
  cout << "B: Ms = solve for s" << endl; 
  cout << "C: Mv2 = solve for v^2" << endl; 
  cout << "D: Mv = solve for v_bar" << endl;
  cout << "F: exit" << endl;
  cout << "X: clear the screen" << endl;  
}
//definintion 

double divideFormula(double x,double y)
{
  double answer;

  answer = x/y;
  return answer;
}
double multiplyFormula(double x,double y)
{
  double answer;

  answer = x*y;
  return answer;
}
double mFormula1(double x,double y,double z)
{
  double answer;

  answer = x + (y * z);
  return answer;
}
double mFormula2(double x,double y,double z)
{
  double answer;

  answer = x/y;
  return answer;
}
double mFormula3(double x,double y,double z)
{
  double answer;

  answer = x/y;
  return answer;
}
double mFormula4(double x,double y,double z)
{
  double answer;

  answer = x/y;
  return answer;
}

#endif