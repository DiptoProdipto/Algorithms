//Binary Search Algorithm using Iterative method

#include<iostream>
using namespace std;

int BinarySearch(int a[], int n, int key)
{
	int l=0, h=n-1;

	while(l<=h)
	{
		int mid = (l+h)/2;
		if(key==a[mid])
			return mid;
		if(key<a[mid])
			h = mid-1;
		else
			l = mid+1;
	}
	return 0;
}

int main()
{
	int n, i, key;
	cout<<"How many elements: ";
	cin>>n;
	int a[5];
	cout<<"Enter the elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element that you wanna search: ";
	cin>>key;

	int r = BinarySearch(a,n,key);

	if(r==0)
		cout<<"Element is not present in the list"<<endl;
	else
		cout<<"Element is at "<<r+1<<" index"<<endl;

	return 0;
}