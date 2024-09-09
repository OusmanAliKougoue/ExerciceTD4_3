#ifndef PERSONNEL_H
#define PERSONNEL_H
#include "Employe.h"
#include <iostream> 
using namespace std;
class Personnel
{
private:
    int nbmax;
    int nb;
    Employe ** tab;

public:
    Personnel(int n);
   virtual ~Personnel();
    void ajouter(Employe* e);
    void afficher();
    double salaireMoyenne();
};
#endif