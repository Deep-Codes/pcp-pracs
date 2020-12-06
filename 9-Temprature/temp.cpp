
#include <iostream>
using std::cin;
using std::cout;

int main()
{
  int i, num;
  cout << "Enter Temprature in Celcius: ";
  cin >> num;
  i = (num * 9 / 5) + 32;
  cout << "Temperature in Fahrenheit: " << i << " F";
  return 0;
}