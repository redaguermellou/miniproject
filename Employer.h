#ifndef EMPLOYER_H
#define EMPLOYER_H

#include <string>
using namespace std;

class employer {
    int id;
    string nom;
    float salaire;
public:
    employer() : id(0), nom("mohamed"), salaire(0) {} // Use quotes for string
    employer(int id, string nom, float salaire) : id(id), nom(nom), salaire(salaire) {}
    void afficherdetaille();
    float augmentersalaire(int pourcentage);
};

#endif // EMPLOYER_H
