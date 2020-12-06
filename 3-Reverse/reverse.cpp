
#include <iostream>
using std::cin;
using std::cout;

int main()
{
  int num, temp;
  int r = 0;
  cout << "Enter a 3-Digit Number: ";
  cin >> num;
  temp = num;

  while (num != 0)
  {
    r = r * 10 + num % 10;
    num /= 10;
  }

  cout << "Reversed Number: " << r;

  return 0;
}