/* A header file to hold the 
main defintions of the program
Student: Bryslin Chavous
Teacher: Dr_T 10-17-2019, updated 3-24-2020 (clear screen methods for Ubuntu)
*/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
//libraries
#include <iostream>
#include<string>
#include<cmath>
#include "Input_Validation_Extended.h" 
using namespace std;

//function prototypes
void handleOption(string);
void hsubOption(string);
void showMenu();
void showSubmenu();
double divideFormula(double,double);
double multiplyFormula(double,double);
double mFormula1(double,double,double);
double mFormula2(double,double,double,double);
double mFormula3(double,double,double,double);
double mFormula4(double,double);

//definitions
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
      x = validateDouble(x); //cin >> mass;
      cout << "\nWhat is the acceleration of gravity? ";
      y = validateDouble(y); //cin >> acceleration;

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
      y = validateDouble(y); //cin >> volume;

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
        cout << "\nEscape the MATRIX..." << endl; 
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
    double x = 0, y = 0, z = 0, w = 0;
    string suboption = "";


    if(userOption == "A" || userOption == "a")
    {
      cout << "\nMa = initial velocity + acceleration * seconds\n";
      cout << "\nWhat is the initial velocity of the oebject?: ";
      x = validateDouble(x); //cin >> vel;
      cout << "\nWhat is the acceleration of the object? ";
      y = validateDouble(y); //cin >> acceleration;
      cout << "\nHow many seconds passsed? ";
      z = validateDouble(z); //cin >> seconds;
      
      //call the mFormula1 function
      cout << "\nMa = " << mFormula1(x,y,z) << endl;
    }
    else if(userOption == "B" || userOption == "b")
    {
      cout << "\nMs = initial position + initial velocity * seconds + 1/2 acceleration * seconds^2" << endl; 
      cout << "\nWhat is the initial position of the object?: ";
      x = validateDouble(x); //cin >> ipos;
      cout << "\nWhat is the initial velocity of the object? ";
      y = validateDouble(y); //cin >> fvel;
      cout << "\nHow many seconds passsed? ";
      z = validateDouble(z); //cin >> secs;
      cout << "\nWhat is the acceleration of the object? ";
      w = validateDouble(w); //cin >> acc;

      //call the mFormula2 function
      cout << "\nMs = " << mFormula2(x,y,z,w) << endl;
    }
    else if(userOption == "C" || userOption == "c")
    {
      cout << "\nMv2 = initial velocity^2 + 2 * acceleration (final position - initial position)" << endl; 
      cout << "\nWhat is the initial velocity of the object?: ";
      x = validateDouble(x); //cin >> ivel;
      cout << "\nWhat is the acceleration of the object? ";
      y = validateDouble(y); //cin >> acc;
      cout << "\nWhat is the final position of the object? ";
      z = validateDouble(z); //cin >> fpos;
      cout << "\nWhat is the initial position of the object? ";
      w = validateDouble(w); //cin >> ipos;
      
      //call the mFormula3 function
      cout << "\nMv2 = " << mFormula3(x,y,z,w) << endl;
    }
    else if(userOption == "D" || userOption == "d")
    { 
      cout << "\nMv = 1/2 (final velocity + initial velocity)" << endl ;
      cout << "\nWhat is the final velocity of the object?: ";
      x = validateDouble(x); //cin >> fvel;
      cout << "\nWhat is the initial velocity of the object? ";
      y = validateDouble(y); //cin >> ivel;

      //call the mFormula4 function
      cout << "\nMv = " << mFormula4(x,y) << endl;
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
  cout << "A: Ma = solve for velocity" <<endl; 
  cout << "B: Ms = solve for displacement" << endl; 
  cout << "C: Mv2 = solve for v^2" << endl; 
  cout << "D: Mv = solve for v_bar" << endl;
}

//definintions
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

  answer = x + y * z;
  return answer;
}
double mFormula2(double x,double y,double z,double w)
{
  double answer;

  answer = x + y * z + (1/2) * w * pow(z, 2);
  return answer;
}
double mFormula3(double x,double y,double z,double w)
{
  double answer;

  answer = pow(x, 2) + 2 * y * (z - w);
  return answer;
}
double mFormula4(double x,double y)
{
  double answer;

  answer = 0.5 * (x + y);
  return answer;
}

#endif