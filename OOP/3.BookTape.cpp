#include<iostream>
#include<string.h>

using namespace std;

class Publication
{
	protected:
		string title;
		float price;
	public:
		void set_zero()
		{
			title="000";
			price=0.0;
		}
		void getData()
		{
			cout<<"\nEnter title : ";
			cin>>title;
			cout<<"\nEnter price : ";
			cin>>price;
		}
		void putData()
		{
			cout<<"\nTitle : "<<title;
			cout<<"\nPrice : "<<price;
		}
};

class Book:public Publication
{
	private:
		int page_count;
	public:
		void set_zero()
		{
			Publication::set_zero();
			page_count = 0;
		}
		
		void getData()
		{
			Publication::getData();
			
			try
			{
				cout<<"\nEnter number of pages : ";
				cin>>page_count;
				if(page_count<0){
					throw(0);}
				
				if(price<0){
					throw(0.0);}
				
			}
			catch(int x)
			{
				cout<<"\nException--Page count cannot be zero.";
				cout<<"\nTurning all values to zero.";
				set_zero();
			}
			catch(double x)
			{
				cout<<"\nException--Price cannot be zero.";
				cout<<"\nTurning all values to zero.";
				set_zero();
			}
			
		}
		
		void putData()
		{
			Publication::putData();
			cout<<"\nPage Count : "<<page_count;
		}
};

class Tape:public Publication
{
	private:
		int run_time;
	public:
		void set_zero()
		{
			Publication::set_zero();
			run_time = 0.;
		}
		
		void getData()
		{
			Publication::getData();
			
			try
			{
				cout<<"\nEnter run time : ";
				cin>>run_time;
				if(run_time<0){
					throw(0);}
				
				if(price<0){
					throw(0.0);}
				
			}
			catch(int x)
			{
				cout<<"\nException--Run time cannot be zero.";
				cout<<"\nTurning all values to zero.";
				set_zero();
			}
			catch(double x)
			{
				cout<<"\nException--Price cannot be zero.";
				cout<<"\nTurning all values to zero.";
				set_zero();
			}
			
		}
		
		void putData()
		{
			Publication::putData();
			cout<<"\nRun Time : "<<run_time;
		}
};

int main()
{
	Book B;
	Tape T;
	cout<<"\nEnter Book data : "<<endl;
	B.getData();
	B.putData();
	cout<<endl;
	cout<<"\nEnter Tape data : "<<endl;
	T.getData();
	T.putData();
	cout<<endl;
	return 0;
}