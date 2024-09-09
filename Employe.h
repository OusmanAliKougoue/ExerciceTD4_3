#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <iostream>
using namespace std;
class Employe
{
private:
    string nom;
    string prenom;
    int age;
public:
    Employe(string&,string&,int);
    ~Employe();
    virtual void afficher();
    virtual double calcul_salaire()=0;
};
#endif//EMPLOYE_H