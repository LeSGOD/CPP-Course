#include <iostream>

using namespace std;

int main() {
     int cents{0},dollars{0},quarters{0},dimes{0},nickels{0},pennies{0};
     cout << " Enter amount in cents: ";
     cin >> cents;
     
     dollars = int(cents/100);
     cents -= dollars * 100;
     quarters = int(cents/25);
     cents -= quarters*25;
     dimes = int(cents/10);
     cents -= dimes * 10;
     nickels = int(cents/5) ;
     cents -= nickels*5;
     pennies = cents;
     
     cout << "dollars: " << dollars<< endl;
     cout << "quarters: " << quarters << endl;
     cout << "dimes: " << dimes << endl;
     cout << "nickels: " << nickels << endl;
     cout << "pennies: " << pennies << endl;
     
    
    return 0;
}