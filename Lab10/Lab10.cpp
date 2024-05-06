#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct ApartmentOwner {
    string lastName;
    int apartmentNumber;
    int numberOfResidents;
};

int main() {
    vector<ApartmentOwner> apartmentOwners;


    int n;
    cout << "Enter the number of apartment owners: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        ApartmentOwner owner;
        cout << "Last name of the owner: ";
        cin >> owner.lastName;
        cout << "Apartment number: ";
        cin >> owner.apartmentNumber;
        cout << "Number of residents: ";
        cin >> owner.numberOfResidents;
        apartmentOwners.push_back(owner);
    }


    cout << "\nFull list of apartment owners:\n";
    for (const auto& owner : apartmentOwners) {
        cout << "Last name: " << owner.lastName << ", Apartment number: " << owner.apartmentNumber
            << ", Number of residents: " << owner.numberOfResidents << endl;
    }


    cout << "\nApartment numbers with more than 4 residents:\n";
    for (const auto& owner : apartmentOwners) {
        if (owner.numberOfResidents > 4) {
            cout << "Apartment number: " << owner.apartmentNumber << ", Number of residents: " << owner.numberOfResidents << endl;
        }
    }

    return 0;
}
