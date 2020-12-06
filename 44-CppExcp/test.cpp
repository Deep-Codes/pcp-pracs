#include <iostream>
using namespace std;

int main()
{
  try
  {
    int n1, n2;
    cout << "Enter Num1: ";
    cin >> n1;
    cout << "Enter Num2: ";
    cin >> n2;

    if (n2 == 0)
    {
      throw 99;
    }
    cout << "The Division: " << n1 / n2;
  }
  catch (int x)
  {
    cout << "Can't Divide by Zero"
         << "Exception Error: " << x;
  }
}