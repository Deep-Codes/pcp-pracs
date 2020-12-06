#include <iostream>
using namespace std;

class Animal
{
public:
  void make_sound()
  {
    cout << "Animal Sound";
  }
};

class Dog : public Animal
{
public:
  void make_sound()
  {
    cout << "Woof Woof";
  }
};

class Cat : public Animal
{
public:
  void make_sound()
  {
    cout << "Meowww";
  }
};

int main()
{
  Cat c1;
  Dog d1;
  c1.make_sound();
  d1.make_sound();
}
