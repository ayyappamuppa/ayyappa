#include<iostream>
using namespace std;
class shape
{
	public:
		int a,b;
		void getdata()
		{
			cout<<"enter details ";
			cin>>a>>b;
			
		}
		virtual void displayarea()
		{
			cout<<"area is"; 
					}
};
class triangle:public shape
{
	public:
		float area1;
	 virtual void displayarea()
	 {
	 	area1=0.5*a*b;
	 	cout<<"area of triangle is "<<area1;
	 }
};
class rectangle:public shape
{
	public:
		float area2;
		virtual void displayarea()
		{
			area2=a*b;
			cout<<"area of rectangle is "<<area2;
		}
};
class circle:public shape
{
	public:
		float area3;
		virtual void displayarea()
		{
			area3=3.14*a*a;
			cout<<"area of circle is "<<area3;
		}
};
int main()
{
	shape *s;
triangle t;
rectangle r;
circle c;

s=&t;
s->getdata();
s->displayarea();
cout<<endl;
s=&r;
s->getdata();
s->displayarea();
cout<<endl;
s=&c;
s->getdata();
s->displayarea();
return 0;
}


