

#include<iostream>
#include<string> 
using namespace std;

class mere  { //class mere

public: 
void display(){
                  cout<< "This is class mere"<<endl;
}

                  
};
class fille:public mere{ // class fille heritee de la class mere
public:
void display(){

                  cout<< "This is class fille"<<endl;}

};


int main(void){
fille fille1;    // create object fille1
fille1.display(); // result

          return 0;        
}
