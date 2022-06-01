// Triangles Class
// 
// 

#ifndef TRIANGLE_H
#define TRIANGLE_H


#include <iostream>
#include <ostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

class Triangle{
    private:
        string name;
        float side[3];
        float area;
        float perimeter;

    public:

        // setters for Triangle Class
        void setName(string inputName)  {this-> name = inputName;}
        void setSide(float inputFirstSide, float inputSecondSide, float inputThirdSide) {this-> side[0] = inputFirstSide; this->side[1] = inputSecondSide; this->side[2] = inputThirdSide;}
        void setArea(float inputArea) {this-> area = inputArea;}
        void setPerimeter(float inputPerimeter) {this-> perimeter = inputPerimeter;}

        // Getters for Triangle Class
        string getName() {return name;}
        float *getSide() {return side;}
        float getArea() {return area;}
        float getPerimeter() {return perimeter;}

        // Default Constructor
        Triangle(){
            name = "";
            side[0] = 0;
            side[1] = 0;
            side[2] = 0;
            area = 0;
            perimeter = 0;
        }

    // Non-default Constructor
        Triangle(string inputName, float firstSide, float secondSide, float thirdSide) {
            name = inputName;
            side[0] = firstSide;
            side[1] = secondSide;
            side[2] = thirdSide;
        }

        public:
            void prompt();
            void calculateArea();
            void calculatePerimeter();
            void display();
            void process();
};

void Triangle::prompt(){

    string name = "";
    float side [3];

    cout << "\n Enter the name of the Triangle =  ";
    getline(cin, name);
    setName(name);

    cout << "\n Enter the First side of the triangle: ";
    cin >> side[0];

    cout << "\n Enter the Second side of the triangle: ";
    cin >> side[1];

    cout << "\n Enter the Third side of the triangle: ";
    cin >> side[2];

    setSide(side[0], side[1], side[2]);
}

void Triangle::calculateArea(){
    float *p;
    float area;
    float semiPerimeter;
    p = getSide();
    semiPerimeter = (p[0] + p[1] + p[2])/2;
    area = sqrt(semiPerimeter * (semiPerimeter - p[0]) * (semiPerimeter - p[1]) * (semiPerimeter - p[2]));
    setArea(area);
}

void Triangle::calculatePerimeter(){

    float perimeter = 0;
    float *p;
    p = getSide();
    perimeter = p[0] + p[1] + p[2];
    setPerimeter(perimeter);
}

void Triangle::display(){
    cout << fixed;
    cout << setprecision(2);
    cout << "\nThe perimeter of "<< getName() << " is "<< getPerimeter() << ". ";
    cout << "\nThe Area of " << getName() << " is "<< getArea() << ". \n";
}

void Triangle::process(){
    prompt();
    calculatePerimeter();
    calculateArea();
    display();


}

#endif