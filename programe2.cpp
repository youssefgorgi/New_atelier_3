#include<iostream> 
using namespace std;
class Shape {
public:

float largeur;
float hauteur;

Shape(float largeur, float hauteur){

                  this-> largeur= largeur;
                  this-> hauteur= hauteur;

}

 };
class Triangle:public Shape {
public:

 Triangle(float largeur, float hauteur) : Shape(largeur, hauteur) {}  
void area(){
cout<< "l'air de Triangle est :"<< (largeur * hauteur) / 2  << endl;
}
};
class Rectangle:public Shape {
public:
Rectangle(float largeur, float hauteur) : Shape(largeur, hauteur) {}
void area(){
cout<< "l'air de Rectangle est : "<<largeur*hauteur << endl;
}
};
int main (void){

Triangle triangle1(3.5,8.1);
triangle1.area();
Rectangle rectangle1(3.2,5.3);
rectangle1.area();
          return 0;        
}
