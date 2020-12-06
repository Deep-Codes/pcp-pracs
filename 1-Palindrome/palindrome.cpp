// ? to find whether a number is a palindrome

#include <iostream>
using std::cin;
using std::cout;

int main()
{
  int num, r = 0, temp;
  cout << "Enter a Number: ";
  cin >> num;
  temp = num;

  // * Reverse number
  while (num != 0)
  {
    r = r * 10 + num % 10;
    num /= 10;
  }

  if (temp == r)
    cout << temp << " is a Palindrome.";
  else
    cout << temp << " is not Palindrome.";

  return 0;
}