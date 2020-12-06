
#include <iostream>
using std::cin;
using std::cout;

int main()
{
  int num;
  int temp = 1;
  cout << "Enter a  Number: ";
  cin >> num;

  while (num > 0)
  {
    temp = num * temp;
    num--;
  }

  cout << "Factorial of " << num << " is: " << temp;

  return 0;
}