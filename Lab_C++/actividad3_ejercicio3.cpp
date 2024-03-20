# include <iostream>
using namespace std;

int main()
{
    double year;
    double birthYear;
    double age;

    cout <<"Enter todays year: ";
    cin >> year;

    cout <<"Enter your birth year: ";
    cin >> birthYear;

    age = year - birthYear;

    cout <<"Your age is: " <<age <<endl;

    return 0;
}