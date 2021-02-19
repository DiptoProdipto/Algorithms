//Binary Search Algorithm using Iterative method

#include<iostream>
using namespace std;

int BinarySearch(int a[], int l, int h, int key)
{
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
	return -1;
}

int main()
{
	int a[100], n, i, key;
	cout<<"How many elements: ";
	cin>>n;
	cout<<"Enter the elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element that you wanna search: ";
	cin>>key;

	int r = BinarySearch(a, 0, n-1, key);

	if(r==-1)
		cout<<"Element is not present in the list"<<endl;
	else
		cout<<"Element is at "<<r+1<<" index"<<endl;

	return 0;
}
