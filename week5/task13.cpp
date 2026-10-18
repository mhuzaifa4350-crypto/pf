#include <iostream>
using namespace std;
void tens(int n1);
void ones(int n2);
main()
{
    cout << "Enter number ";
    int num;
    cin >> num;

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
    else if (num == 10)
        cout << "Ten";
    else if (num == 11)
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
    else if (num == 20)
        cout << "Twenty";
    else if (num == 30)
        cout << "Thirty";
    else if (num == 40)
        cout << "Forty";
    else if (num == 50)
        cout << "Fifty";
    else if (num == 60)
        cout << "Sixty";
    else if (num == 70)
        cout << "Seventy";
    else if (num == 80)
        cout << "Eighty";
    else if (num == 90)
        cout << "Ninety";
    else
    {
        tens(num);
        ones(num);
    }
}
void tens(int n1)
{
    if (n1 / 10 == 2)
    {
        cout << "Twenty ";
    }

    else if (n1 / 10 == 3)
    {
        cout << "Thirty ";
    }

    else if (n1 / 10 == 4)
    {
        cout << "Forty ";
    }

    else if (n1 / 10 == 5)
    {
        cout << "Fifty ";
    }

    else if (n1 / 10 == 6)
    {
        cout << "Sixty ";
    }

    else if (n1 / 10 == 7)
    {
        cout << "Seventy ";
    }

    else if (n1 / 10 == 8)
    {
        cout << "Eighty ";
    }

    else if (n1 / 10 == 9)
    {
        cout << "Ninty ";
    }
}
void ones(int n2)
{
    if (n2 % 10 == 1)
        cout << "One";
    else if (n2 % 10 == 2)
        cout << "Two";
    else if (n2 % 10 == 3)
        cout << "Three";
    else if (n2 % 10 == 4)
        cout << "Four";
    else if (n2 % 10 == 5)
        cout << "Five";
    else if (n2 % 10 == 6)
        cout << "Six";
    else if (n2 % 10 == 7)
        cout << "Seven";
    else if (n2 % 10 == 8)
        cout << "Eight";
    else if (n2 % 10 == 9)
        cout << "Nine";
}
