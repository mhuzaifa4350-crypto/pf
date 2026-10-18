
#include <iostream>
using namespace std;

void reversenum(int number);

int main()
{
    int num;
    
    cout << "Enter your number: ";
    cin >> num;

    reversenum(num);
    return 0;
}

void reversenum(int number)
{
    while (number > 0)
    {
        int n = number % 10;
        cout << n;
        number = number / 10;
    }
}
