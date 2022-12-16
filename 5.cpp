/*Create an integer class and overload logical not operator for that class. Lets not operator reverse the integer class object*/
#include<iostream>
using namespace std;
class integer
{
  int x;
  public:
   void setData(int x)
   {
     cout<<"setData(int) clled"<<endl;
     this->x=x;
   }
   void display()
   {
     cout<<"display() called"<<endl;
     cout<<x<<endl;
   }
   integer(){ cout<<"DC called"<<endl;}
   integer(int x)
   {
     cout<<"PC called"<<endl;
     this->x=x;
   }
   int operator !()
   {
     int i=0, rem=0, rev=0;
     cout<<"operator ! called"<<endl;
     while(x!=0)
     {
      rem=x%10;
      rev=rev*10+rem;
      x=x/10;
     }
     return rev;
   }
};

int main()
{
  integer i1(1234), i2;
  i1.display();
  i2.setData(321);
  i2.display();
  int n;
  n=!i1;
  cout<<n<<endl;
  n=!i2;
  cout<<n<<endl;
  return 0;
}
