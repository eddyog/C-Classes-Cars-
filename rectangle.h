

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <cmath>
#include <string>
#include <ostream>
#include <iomanip>

using namespace std;

class Rectangle {
    private:
        string name;
        float sides[2];
        float area;
        float perimeter;

    public:
    // Setters 
        void setName(string inputName) {this-> name = inputName;};
        void setSides(float inputSide_a, float inputSide_b){this->sides[0] = inputSide_a; this->sides[1] = inputSide_b;}
        void setArea(float inputArea) {this-> area = inputArea;}
        void setPerimeter (float inputPerimeter ) {this-> perimeter = inputPerimeter;}

    // Getters 
        string getName() {return name;}
        float *getSides() {return sides;}
        float getArea() {return area;}
        float getPerimeter() {return perimeter;}

    // default Coonstructor

        Rectangle(){
            name = "";
            sides[0] = 0;
            sides[1] = 0;
            area = 0;
            perimeter = 0;
        }
        
    // None-default Constructor

        Rectangle(string inputName, float inputSide_a, float inputSide_b, float inputArea, float inputPerimeter) {

            name = inputName;
            sides[0] = inputSide_a;
            sides[0] = inputSide_b;
            area = inputArea;
            perimeter = inputPerimeter;

        }

        // Methods

        public:
            void prompt();
            void calculateArea();
            void calculatePerimeter();
            void display();
            void process();

};

void Rectangle::prompt() {

    string name; 
    float a;
    float b;
    
    cout << "\nPlease introduce the name of the Rectangle: ";
    getline(cin, name);
    setName(name);

    cout << "\nWhat is the size of the first side of " << getName() << ": ";
    cin >> a;
    
    cout << "\nWhat is the size of the Second side of " << getName() << ": ";
    cin >> b;

    setSides(a,b);

}

void Rectangle::calculateArea(){
    
    float *sides;
    float area;
    sides = getSides();
    area = sides[0] * sides[1];
    setArea(area);
}

void Rectangle::calculatePerimeter() {
    float *sides;
    float perimeter;
    sides = getSides();

    perimeter  = sides[0] + sides[1];
    setPerimeter(perimeter);
}

void Rectangle::display(){
    cout << fixed;
    cout << setprecision(2);
    cout << "\nThe Area of " << getName() << " is: " << getArea();
    cout << "\nThe Perimeter of " << getName() << "is: " << getPerimeter() << "\n";
}

void Rectangle::process() {
    prompt();
    calculateArea();
    calculatePerimeter();
    display();
}

#endif