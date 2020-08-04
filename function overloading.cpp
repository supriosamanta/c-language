#include <iostream>
#include<string>
using namespace std;
double area(double x)
{
    double cal, pi=3.14;
    cal=pi*x*x;
    cout<< "area of the circle :"<< cal;
}
int area(int x,int y)
{
    int cal;
    cal=0.5*x*y;
    cout<<"area of the triangle :"<< cal;
}
double area(double x,double y)
{
    int cal;
    cal=2*(x+y);
    cout<< "area of the rectangle :"<< cal;
}
int main()
{
  int  r,l,b,w,h;
  int shape=0;
  cout<< "choose your shape\n1.circle\n2.triangle\n3.rectangle\n4.exit\n";
  cin >> shape;
  if (shape==1)
  {

      cout << "enter the radius of the circle\n";
      cin >> r ;
      area(r);
  }

  else if(shape==2)
    {

      cout << "enter the value of base and hight\n";
      cin >> b >> h;
      area(b,h);
    }

  else if(shape==3)
    {

      cout << "enter the value of length and width\n";
      cin >> l >> w;
      area(l,w);
     }
  else if(shape!=1 || shape!=2 || shape!=3)
  {
      cout << "invalid input !";
  }
  return 0;
}
