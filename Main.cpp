#include "employer.h" // Include the employer class header

int main() {
    // Create three employer objects with different initial salaries
    employer emp1(1, "Alice", 50000);
    employer emp2(2, "Bob", 60000);
    employer emp3(3, "Charlie", 70000);

    // Display initial details
    cout << "Initial details:" << endl;
    emp1.afficherdetaille();
    emp2.afficherdetaille();
    emp3.afficherdetaille();

    // Apply salary increase
    emp1.augmentersalaire(10); // Increase Alice's salary by 10%
    emp2.augmentersalaire(15); // Increase Bob's salary by 15%
    emp3.augmentersalaire(20); // Increase Charlie's salary by 20%

    // Display updated details
    cout << "\nUpdated details after salary increase:" << endl;
    emp1.afficherdetaille();
    emp2.afficherdetaille();
    emp3.afficherdetaille();

    return 0;
}
