
// Set: set is a container to store unique key following specific order
//		key cannot modified. but it allows to access, remove the key
//		key itself a value
//		set uses internally binary search tree
//
// unordered_set: same like set. but elements are not sorted
//					it uses hash map. so search time is better than set

#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main()
{
	{
		set<int> myset;
		myset.insert(1);
		myset.insert(5);
		myset.insert(4);
		myset.insert(3);
		cout<<"Set"<<endl;
		for(auto it=myset.cbegin(); it!=myset.cend(); it++)
		{
			cout<<*it<<" ";
		}
	}

	{
		unordered_set<int> myset;
		myset.insert(1);
		myset.insert(5);
		myset.insert(4);
		myset.insert(3);
		cout<<endl<<"Unordered Set"<<endl;
		for(auto it=myset.cbegin(); it!=myset.cend(); it++)
		{
			cout<<*it<<" ";
		}
	}

}




