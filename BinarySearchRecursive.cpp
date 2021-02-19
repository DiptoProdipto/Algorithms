//Binary Search Algorithm using Recursive method

#include<iostream>
using namespace std;

int RBinarySearch(int a[], int l, int h, int key)
{
    if(l==h)
    {
        if(a[l]==key)
            return l;
        else
            return -1;
    }
    else
    {
        int mid = (l+h)/2;
        if(key==a[mid])
            return mid;
        if(key<a[mid])
            return RBinarySearch(a, l, mid-1, key);
        else
            return RBinarySearch(a, mid+1, h, key);
    }
    return -1;
}

int main()
{
    int n, i, a[100], key, r;
    cout<<"How many elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Which element you wanna search: ";
    cin>>key;
    r = RBinarySearch(a, 0, n-1, key);
    if(r==-1)
        cout<<"Element is not found"<<endl;
    else
        cout<<"Element is found at "<<r+1<<" index"<<endl;
    return 0;
}