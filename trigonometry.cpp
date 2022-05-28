// Program that helps y

#include <iostream>
#include <string>
#include <cmath>
#include "square.h"
#include "rectangle.h"
#include "triangle.h"



int main () {

    Square mySquare;
    Triangle myTriangle;
    Rectangle myRectangle;
    int option;
    int again;
    
    do{
        cout << "Welcome to the Geometry tool " ;
        cout << "\nSelect Area and perimeter that you want to calculate \n1) Square \n2) Triangle \n3) Rectangle \nMy option = " ;
        cin>> option;

        cin.clear();
        fflush(stdin);

        switch (option)
        {
        case 1:
            //will call the method from the square class that will perform the proompt, process and display
            mySquare.process();
            cout << "Do you want to continue? Yes = 1 / No = 0 = ";
            cin >> again;
            if (again == 1){ 
                break;
            } else if (again == 0) {
                option = 0;
            }
            break;
        case 2:
    
            myTriangle.process();
            cout << "Do you want to continue? Yes = 1 / No = 0 = ";
            cin >> again;
            if (again == 1){ 
                break;
            } else if (again == 0) {
                option = 0;
            }
            break;

        case 3:

            myRectangle.process();
            cout << "Do you want to continue? Yes = 1 / No = 0 = ";
            cin >> again;
            if (again == 1){ 
                break;
            } else if (again == 0) {
                option = 0;
            }

            break;
        
        default:

        
            break;
        }

    } while (option != 0);

    cout << "\nThanks for using the Geometry tool\n";
    
}