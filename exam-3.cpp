#include <iostream>
using namespace std;

int main()
{
cout << "input number: ";
int number, polin;
cin >> number;
int last,first;
last = number % 10;
first = (number / 100) % 10;
if (first == last)
cout << number << " This is palindrom" << endl;
else
cout << "NO " << endl;
return 0;
}