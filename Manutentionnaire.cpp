#include "Manutentionnaire.h"

Manutentionnaire::Manutentionnaire(string& nm,string& pnm,int age,int nbH):Employe(nm,pnm,age)
{
    cout<<"\n Appel du constructeur pour l'objet Manutentionnaire adr="<<this<<endl;
    nb_heures=nbH;
}

Manutentionnaire::~Manutentionnaire()
{
    cout<<"\n Appel du destructeur pour l'objet Manutentionnaire adr="<<this<<endl;
}
void Manutentionnaire::afficher(){
    Employe::afficher();
    cout<<"nombres d'heures :"<<nb_heures<<endl;
}
double Manutentionnaire::calcul_salaire(){
    double salaire=65*nb_heures;
    return salaire;
}