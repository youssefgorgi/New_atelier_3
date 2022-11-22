
#include<iostream> 
#include<String>
using namespace std; 
class Personne {
private:
	string nom;
		string prenom;
	string date_naissance;
public:
	Personne(string nom,string prenom,string date_naissance) {
		this-> nom=nom;
		this-> prenom=prenom;
		this-> date_naissance=date_naissance;
	};
		void afficher(){
			cout<< "Nom :"<< nom<<endl;
			cout<< "Prenom :"<< prenom<<endl;
			cout << "Date_naissance :"<< date_naissance<<endl;
		}
};
class Employe : public Personne{
	public : 
		float salaire;
		
Employe(string nom,string prenom,string date_naissance,float salaire) : Personne(nom, prenom,date_naissance) {
	
	this-> salaire=salaire;
}  
		virtual void afficher(){
	Personne::afficher();
			 
			cout << "Salaire:" << salaire <<"Dh" <<endl;
}
};
		


class Chef : public  Employe{
public: 
	string service;
	
	Chef(string nom,string prenom,string date_naissance,float salaire,string service):Employe(nom,prenom,date_naissance,salaire)

	{
		this->service=service;
	}
	virtual void afficher(){
		Employe :: afficher();
		cout<< "Service:" <<service <<endl;
	}
};

class Directeur : public Chef {
public:
	string societe;
	
	Directeur(string nom,string prenom,string date_naissance,float salaire,string service,string societe): Chef (nom,prenom,date_naissance,salaire,service)
	{
		this-> societe=societe;
		
	}
	virtual void afficher(){
		Chef :: afficher();
		cout << "Societe:"<< societe <<endl;
		
	}
	};

int main(void){
	Personne p1("amin","sk","29/01/2005");
	p1.afficher();
	Employe e1 ("amina","lk","06/02/2003",122.48);
	e1.afficher();
	Chef chef1("abderahim","bk","01/03/2011",1222.5,"Production");
	chef1.afficher();
	Directeur directeur1("Youssef","Gorgi","05/11/2001",100000.5,"IT","Standard profil");
	directeur1.afficher();

}
