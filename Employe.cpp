#include "Employe.h"
Employe::Employe(string& a,string& b,int c)
{
    cout<<"\n Appel du constructeur pour l'objet Employe adr="<<this<<endl;
    nom=a;
    prenom=b;
    age=c;
}
Employe::~Employe()
{
   cout<<"\n Appel du destructeur pour l'objet Employe adr="<<this<<endl;
}
void Employe::afficher(){
    cout<<"Nom :"<<nom<<endl;
    cout<<"PreNom :"<<prenom<<endl;
    cout<<"Age : "<<age<<endl;
}