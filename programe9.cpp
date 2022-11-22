#include<iostream> 
using namespace std;

class Verifier{
	
public:
	static int x;
	void call(){
		x++;
		cout<<x<<endl;
		
	}
	
	
};
int Verifier::x=0;
int main(void){
	
	Verifier v1;
	
	v1.call();
	v1.call();
	v1.call();
	v1.call();
	
	
	
}