#ifndef MANUTENTIONNAIRE_H
#define MANUTENTIONNAIRE_H
#include "Employe.h"
#include <iostream> 
using namespace std;
class Manutentionnaire:public Employe
{
private:
   int nb_heures;
public:
    Manutentionnaire(string&,string&,int,int);
    ~Manutentionnaire();
    void afficher();
    double calcul_salaire();
};
#endif