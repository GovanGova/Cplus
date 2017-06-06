
//Unoredered Map: Calculates hash value for key and stores it in Hash table
//					Cannot access element using position
//					Keys are not sorted
// header		:	unordered_map
//
// map			: keys are storted 
// header		: map

#include<iostream>
#include<map>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
	{
		map<string, int> myMap;
		myMap["Gova"]=1;
		myMap["Apple"]=2;
		myMap["Green"]=3;

		for(auto it=myMap.cbegin(); it!=myMap.cend(); it++)
		{
			cout<<it->first<<" "<<it->second<<endl;
		}
	}
	cout<<"\n"<<"Unordered MAP";
	{
		unordered_map<string, int> myMap;
		myMap["Gova"]=1;
		myMap["Apple"]=2;
		myMap["Green"]=3;
		myMap["Green"]=4;

		for(auto it=myMap.cbegin(); it!=myMap.cend(); it++)
		{
			cout<<it->first<<" "<<it->second<<endl;
		}
	}
}


