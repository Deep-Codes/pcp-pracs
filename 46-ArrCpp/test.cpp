#include <iostream>
using namespace std;
int main()
{
  try
  {
    int arr[] = {1, 2, 3, 4, 5};
    cout << arr[10];
    throw 99;
  }
  catch (int x)
  {
    cout << "Index out of Bound : Error : " << x;
  }
}