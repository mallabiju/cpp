#include <iostream>
using namespace std;

class student
{
   int sub1;
   int sub2;

public:
   student() {}
   student(int x, int y)
   {
      sub1 = x;
      sub2 = y;
   }
   void display()
   {
      cout << "Marks of sub1 =" << sub1 << endl;
      cout << "Marks of sub2 =" << sub2 << endl;
   }
   student operator++()
   {
      sub1++;
      sub2++;
      return student(sub1, sub2);
   }
};
int main()
{
   student s1(80, 72);
   s1.display();
   ++s1;
   s1.display();
   return 0;
}
