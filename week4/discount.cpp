#include <iostream>
using namespace std;
void payable(string day, double amount) {
    double payableAmount;

    if (day == "Sunday" || day == "sunday") {
        payableAmount = amount - (amount * 0.10);
    } else {
        payableAmount = amount; 
    }

    cout << "Payable Amount: $" << payableAmount << endl;
}

int main() {
    string day;
    double amount;
    cout << "Enter the day of purchase: ";
    cin >> day;
    cout << "Enter the total purchase amount: ";
    cin >> amount;
    payable(day, amount);

   
}

    
    


   