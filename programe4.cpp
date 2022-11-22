#include<iostream> 
#include<string> 
using namespace std;


class MyClass {
public:

MyClass(){ // constructor 
cout<< "constructor"<< endl;


}
~MyClass(){ // destructeur
                  cout<< "destructeur"<<endl;

}

};


int main(void){
MyClass m1;



          return 0;        
}