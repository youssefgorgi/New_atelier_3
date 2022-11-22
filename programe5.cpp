#include<iostream>
using namespace std;
class Animal {
public:
	string nom;
	int age;
	void set_value (string nom, int age){
		this-> nom=nom;
		this-> age=age;
		cout<<"le nom :  "<<nom<<endl;
		cout<<"l'age :  "<<age<<" ans"<<endl;
		cout<<endl;
	};
};
class Zebra: public Animal{
	
public:
	string origin="Maroc";
	Zebra(){
		
		cout<< "Origin :  "<<origin<<endl;
	}
};
class Dolphin : public Animal{
public:
	string origin="Algeria";
	Dolphin(){
		cout<< "Origin :  "<<origin<<endl;
		
	}
};

int main(void){
	
	Zebra zebra1;
	zebra1.set_value("ZebraX",5);
	Dolphin dolphin1;
	dolphin1.set_value("DolphinX",3);	
	
}
	
	
	
	
	
	
	
	
	
