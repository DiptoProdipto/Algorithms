#include<iostream>
//#include<vector>
using namespace std;

void merge(int a[], int l, int m, int r)
{
	int n1 = m-l+1;
	int n2 = r-m;

	int *LA = new int[n1];
	int *RA = new int[n2];

	//std::vector<int> LA(n1);
	//std::vector<int> RA(n2);

	for(int i=0;i<n1;i++)
		LA[i] = a[l+i];
	for(int i=0;i<n2;i++)
		RA[i] = a[m+1+i];

	int i = 0;
	int j = 0;
	int k = l;

	while(i<n1 && j<n2)
	{
		if(LA[i]<=RA[j])
			a[k++] = LA[i++];
		else
			a[k++] = RA[j++];
	}

	while(i<n1)
		a[k++] = LA[i++];

	while(j<n2)
		a[k++] = RA[j++];

}

void mergeSort(int a[], int l, int r)
{
	if(l>=r)
		return;
	int m = l+(r-l)/2;
	mergeSort(a, l, m);
	mergeSort(a, m+1, r);
	merge(a, l, m, r);
}

int main()
{
	int i, n;
	//int a[100];
	cout<<"Enter number of elements: ";
	cin>>n;
	int *a = new int[n];
	cout<<"Enter elements: ";
	for(i=0;i<n;i++)
		cin>>a[i];

	mergeSort(a, 0, n-1);

	cout<<"Sorted List: ";

	for(i=0;i<n;i++)
		cout<<a[i]<<" ";

	return 0;
}