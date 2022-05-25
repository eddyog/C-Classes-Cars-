//
//  Square Class 
//
//  Created by Eddy Gonzalez.
//  Copyright 
//

#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include <ostream>
#include <string>
#include <cmath>

using namespace std;

class Square{
    private:
        string name;
        float side;
        float area;
        float perimeter;

    public: 
    // Setters for my Square class
    void setName(string inputName) {this-> name = inputName;}
    void setSide(float inputSide) {this-> side = inputSide;}
    void setArea(float inputArea) {this-> area = inputArea;}
    void setPerimeter(float inputPerimeter){this-> perimeter = inputPerimeter;}
    
    // Getters for my Square Class
    string getName() const {return name;}
    float getSide() const {return side;}
    float getArea() const{return area;}
    float getPerimeter() const {return perimeter;}


    //Default Constructor
    Square(){
        name = "none";
        side = 0;
        area = 0;
        perimeter = 0;
    }

    // Non-default Constructor
    Square(string inputName, float inputSide)
    {
        name = inputName;
        side = inputSide;
        
    }

    public: 
        void process();
        void prompt();
        void calculateArea();
        void calculatePerimeter();
        void display();
};

void Square::prompt(){

    string userName;
    float userSide;

    cout<< "Enter the name of your Square: ";
    getline(cin,userName);
    setName(userName);

    cout<< "Enter the side of the Square: ";
    cin >> userSide;
    setSide(userSide);

}

void Square::calculateArea(){

    float area = pow(getSide(),2);
    setArea(area);

}

void Square::calculatePerimeter(){
    float perimeter = getSide() * 4;
    setPerimeter(perimeter);
}

void Square::display(){
    cout << "\nThe Area of the Square is : " << getArea()<< ". ";
    cout << "\nThe Perimeter of "<< getName() << " is " << getPerimeter() << ". \n";
}

void Square::process(){
    prompt();
    calculatePerimeter();
    calculateArea();
    display();
}
;

#endif