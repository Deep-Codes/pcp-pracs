
#include <iostream>
using std::cin;
using std::cout;

int main()
{
  int i, num;
  cout << "Enter Temprature in Fahrenheit: ";
  cin >> num;
  i = (num - 32) * 5 / 9;
  cout << "Temperature in Celcius: " << i << " F";
  return 0;
}
