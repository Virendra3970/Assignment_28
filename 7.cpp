/*Create an integer class that will contain int x as an instance variable and overload casting int() operator that will type cast your Integer class object to int data type.*/

#include<iostream>
using namespace std;
class Integer
{
  private:
   int x;
  public:
   Integer(){}
   Integer(int x){ this->x=x;}
   void setX(int a)
   { x=a;}
   void display()
   { cout<<"display() called\nx= "<<x<<endl;}
   operator int()
   {
     return x;
   }
};

int main()
{
  Integer i1(20);
  int i=i1;
  i1.display();
  cout<<"After type cast: "<<endl;
  cout<<i<<endl;
  return 0;
}
