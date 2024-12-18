#include<iostream>
using namespace std;

class complex
{
	private:
		int x,y;
	public:
		complex()
		{
			x=0;
			y=0;
		}
		

		friend void operator >>(complex &u,complex &v)
		{
			cout<<"Enter real part of first number : "<<endl;
			cin>>u.x;
			cout<<"Enter imaginary part of first number : "<<endl;
			cin>>u.y;
			cout<<"Enter real part of second number : "<<endl;
			cin>>v.x;
			cout<<"Enter imaginary part of second number : "<<endl;
			cin>>v.y;
		}
		friend void operator <<(complex &u,complex &v)
		{
			cout<<u.x<<" + "<<u.y<<"i"<<endl;
			cout<<v.x<<" + "<<v.y<<"i"<<endl;
		}
		
		friend void operator +(complex &u,complex &v)
		{
			complex temp;
			temp.x=u.x+v.x;
			temp.y=u.y+v.y;
			if(temp.y>0)
				cout<<"Complex number is : "<<temp.x<<" + "<<temp.y<<"i"<<endl;
			else
				cout<<"Complex number is : "<<temp.x<<" + "<<(-1)*temp.y<<endl;
		}
		
		friend void operator *(complex &u,complex &v)
		{
			complex temp;
			temp.x=(u.x*v.x)-(u.y*v.y);
			temp.y=(u.x*v.y)+(v.x*u.y);
			if(temp.y>0)
				cout<<"Complex number is : "<<temp.x<<" + "<<temp.y<<"i"<<endl;
			else
				cout<<"Complex number is : "<<temp.x<<" + "<<(-1)*temp.y<<endl;
		}

};


int main()
{
	complex n1,n2;
	operator >> (n1,n2);
	operator << (n1,n2);
	while (true)
	{
		int ch;
		
		cout<<"\n1.ADDITION";
		cout<<"\n2.MULTIPLICATION";
		cout<<"\n3.EXIT";
		
		cout<<"\nEnter your choice : "<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				n1+n2;
				break;
			case 2:
				n1*n2;
				break;
			case 3:
				cout<<"End of program"<<endl;
				break;
			default:
				cout<<"Invalid operation."<<endl;
		}
	}
		
		
}
