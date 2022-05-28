// Program that helps y

#include <iostream>
#include <string>
#include <cmath>
#include "square.h"
#include "triangle.h"



int main () {

    Square mySquare;
    Triangle myTriangle;
    int option;
    
    do{
        cout << "Welcome to the Geometry tool " ;
        cout << "\nSelect Area and perimeter that you want to calculate \n1) Square \n2) Triangle \n3) Rectangle \nMy option = " ;
        cin>> option;

        cin.clear();
        fflush(stdin);

        switch (option)
        {
        case 1:
            //Will call method prompt to ask for the information to the user 
            mySquare.process();
            break;
        case 2:
    
            myTriangle.process();
            break;
        
        default:

        
            break;
        }

    } while (option != 0);
    
}