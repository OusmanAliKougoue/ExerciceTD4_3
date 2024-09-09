#ifndef COMMERCIAL_H
#define COMMERCIAL_H
#include "Employe.h"
#include <iostream>
using namespace std;
class Commercial:public Employe
{
private:
    double chiffreAffaires;
public:
    Commercial(string&,string&,int,double);
    ~Commercial();
    void afficher();
   double calcul_salaire();
};

#endif