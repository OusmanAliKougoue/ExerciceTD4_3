#include "Personnel.h"
#include "Manutentionnaire.h"
#include "Commercial.h"
#include "Employe.h"
int main(){
    string a="sadick";
    string b="ali";
    string c="mht";
    string d="hassan";
    string e="fatma";
    string f="Ndiaye";
    string g="hamza";
    string h="saleh";
    Commercial com1(a,b,18,900.0);
    Commercial com2(c,d,25,1000.0);
    Manutentionnaire man1(e,f,20,8);
    Manutentionnaire man2(g,h,23,4);
    Personnel p(10);
    p.ajouter(&com1);
    p.ajouter(&com2);
    p.ajouter(&man1);
    p.ajouter(&man2);
    p.afficher();
    cout<<endl;
    cout<<"le salaire moyen est de :"<<p.salaireMoyenne();
    return 0;
}