#include "Commercial.h"
Commercial::Commercial(string& nm,string& pnm,int age,double chiff):Employe(nm,pnm,age)
{
    cout<<"\n Appel du constructeur pour l'objet commercial adr="<<this<<endl;
    chiffreAffaires=chiff;
}

Commercial::~Commercial()
{
  cout<<"\n Appel du destructeur pour l'objet commercial adr="<<this<<endl;
}
void Commercial::afficher(){
    Employe::afficher();
    cout<<"chiffre d'affaires :"<<chiffreAffaires<<endl;
}
double Commercial::calcul_salaire(){
    double salaire=(0.2*chiffreAffaires)+400;
    return salaire;
}