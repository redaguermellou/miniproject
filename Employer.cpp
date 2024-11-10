#include <iostream>
#include "employer.h"
using namespace std;


void employer::afficherdetaille() {
    cout << this->id << ", " << this->nom << ", " << this->salaire << endl;
}


float employer::augmentersalaire(int pourcentage) {
    float salaire1 = this->salaire * (pourcentage / 100.0); 
    this->salaire += salaire1; 
    return this->salaire;
}
