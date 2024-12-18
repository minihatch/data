#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<string,int> populationMap;
	populationMap.insert(pair<string,int>("Maharashtra",112));
	populationMap.insert(pair<string,int>("Gujarat",143));
	populationMap.insert(pair<string,int>("Uttar Pradesh",200));
	populationMap.insert(pair<string,int>("Goa",50));
	
	map<string,int>::iterator iter = populationMap.end();
	cout<<"Size of population map is : "<<populationMap.size()<<endl;
	for(iter=populationMap.begin();iter!=populationMap.end();++iter)
	{
		cout<<iter->first<<" : "<<iter->second<<endl;
	}
	string state;
	cout<<"Enter state name : ";
	cin>>state;
	iter=populationMap.find(state);
	if(iter!=populationMap.end())
		cout<<state<<" has a population of "<<iter->second<<" millions"<<endl;
	else
		cout<<"State not found in population map."<<endl;
	populationMap.clear();
}
