#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	char Give_Info[200];
	ofstream out_file;
	out_file.open("File51.bat",ios::out);
	cout<<"\nEnter the Information : " <<endl;
	fgets(Give_Info,200,stdin);
	out_file<<Give_Info<<endl;
	out_file.close();
	
	char Get_Info[200];
	ifstream in_file;
	in_file.open("File51.bat",ios::in);
	in_file.getline(Get_Info,200);
	cout<<"\nInformation in file is : "<<endl;
	cout<<Get_Info<<endl;
	cout<<endl;
	in_file.close();
	
	return 0;
}
