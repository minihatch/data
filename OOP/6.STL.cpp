#include<iostream>
#include<algorithm>
using namespace std;

class person
{
	public:
		string name;
		string dob;
		long tel;
		
		void getData()
		{
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Date of Birth : ";
			cin>>dob;
			cout<<"Enter Telephone : ";
			cin>>tel;
			cout<<endl;
		}
		void displayData()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Date of Birth : "<<dob<<endl;
			cout<<"Telephone : "<<tel<<endl;
		}
};

bool compare(const person &a,const person &b)
{
	return a.name<b.name;
}

int main()
{
	int n;
	cout<<"Enter Total records : ";
	cin>>n;
	string z[n];
	person p[n];
	for(int i=0;i<n;i++)
	{
		p[i].getData();
	}
	cout<<"\tSorted Records : "<<endl;
	cout<<endl;
	sort(p,p+n,compare);
	for(int i=0;i<n;i++)
	{
		p[i].displayData();
		cout<<endl;
	}
	cout<<endl;
	string nm;
	cout<<"Enter the name to be searched : ";
	cin>>nm;
	for(int i=0;i<n;i++)
	{
		z[i]=p[i].name;
	}
	
	if(binary_search(z,z+n,nm))
	{
		cout<<"\tName found in records."<<endl;
	}
	else
		cout<<"\tName not found in record."<<endl;
}
