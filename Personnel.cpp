#include "Personnel.h"
Personnel::Personnel(int n)
{
    nbmax=n;
    nb=0;
    tab=new Employe*[nbmax];
}

Personnel::~Personnel()
{
    if(tab) delete [] tab;
}
void Personnel::ajouter(Employe* e){
    if(nb< nbmax){
        tab[nb++]=e;
    }
   else{
    cout<<"la societe est pleine"<<endl;
   }

}
void Personnel::afficher(){
    for(int i=0; i < nb; i++){
        tab[i]->afficher();cout<<endl;
       cout<<"salaire :"<<tab[i]->calcul_salaire();cout<<endl;
    }
}
double Personnel::salaireMoyenne(){
    double m=0.0;
    for(int i=0; i < nb; i++){
        m+=tab[i]->calcul_salaire();
    }
    return m/nb;
}