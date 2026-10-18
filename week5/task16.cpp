#include <iostream>
using namespace std;
int reversenum(int number);
void translate(int num);
main()
{
    cout << "Enter the number between 1 to 99 : ";
    int number;
    cin >> number;
    int n = reversenum(number);
    translate(n);
}
int reversenum(int number)
{
    int n = number % 10;
    n = n * 10;
    number = number / 10;
    n = n + number;
    return n;
}
void translate(int num)
{
    if (num > 10 && num < 20)
    {
        if (num == 11)
            cout << "Eleven";
        else if (num == 12)
            cout << "Twelve";
        else if (num == 13)
            cout << "Thirteen";
        else if (num == 14)
            cout << "Fourteen";
        else if (num == 15)
            cout << "Fifteen";
        else if (num == 16)
            cout << "Sixteen";
        else if (num == 17)
            cout << "Seventeen";
        else if (num == 18)
            cout << "Eighteen";
        else if (num == 19)
            cout << "Nineteen";
    }
    if (num >= 20 || num == 10)
    {
        if (num / 10 == 1)
        {
            cout << "Ten ";
            num = num % 10;
        }

        else if (num / 10 == 2)
        {
            cout << "Twenty ";
            num = num % 10;
        }

        else if (num / 10 == 3)
        {
            cout << "Thirty ";
            num = num % 10;
        }

        else if (num / 10 == 4)
        {
            cout << "Forty ";
            num = num % 10;
        }

        else if (num / 10 == 5)
        {
            cout << "Fifty ";
            num = num % 10;
        }

        else if (num / 10 == 6)
        {
            cout << "Sixty ";
            num = num % 10;
        }

        else if (num / 10 == 7)
        {
            cout << "Seventy ";
            num = num % 10;
        }

        else if (num / 10 == 8)
        {
            cout << "Eighty ";
            num = num % 10;
        }

        else if (num / 10 == 9)
        {
            cout << "Ninety ";
            num = num % 10;
        }
    }
    if (num == 1)
        cout << "One";
    else if (num == 2)
        cout << "Two";
    else if (num == 3)
        cout << "Three";
    else if (num == 4)
        cout << "Four";
    else if (num == 5)
        cout << "Five";
    else if (num == 6)
        cout << "Six";
    else if (num == 7)
        cout << "Seven";
    else if (num == 8)
        cout << "Eight";
    else if (num == 9)
        cout << "Nine";
}
