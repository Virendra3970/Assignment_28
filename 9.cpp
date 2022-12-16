/*Create a class Marks that have one member varialbe marks and one member function that will print marks. We know that we can access member functions using () dot operator. Now you need to overload (->) arrow operator to access that function.*/
#include<iostream>
using namespace std;
class Marks
{
  private:
   int marks;
  public:
   void print()
   {
     cout<<"print() called \nMarks= "<<marks<<endl;
   }
   Marks()
   { 
     //marks=0;
     cout<<"DC called"<<endl;
   }
   Marks(int m)
   {
     cout<<"PC called"<<endl;
     marks=m;
   }
   void setMarks(int m)
   {
     cout<<"setMarks(int) called"<<endl;
     marks=m;
   }
   Marks *operator ->()
   {
     cout<<"operator -> called"<<endl;
     return this;
   }
};
int main()
{
  Marks m1; 
  m1->setMarks(100);
  Marks m2(200);
  m1->print();
  m2->print();
  return 0;
}

