#include<iostream>
using namespace std;

int binarySearch(int a[],int l,int r,int x)
{
	if(l==r){
		if(x==a[l])
			return l;
		else
			return -1;
	}
	else
	{
		int mid=(l+r)/2;
		if(a[mid]==x)
			return mid;
		else if(x>a[mid])
			binarySearch(a,mid+1,r,x);
		else
			binarySearch(a,l,mid-1,x);
	}
}

int main()
{
	int n;
	int a[n];
	int l,r,x;
	cout<<"Enter the array size: "<<endl;
	cin>>n;
	cout<<"Enter the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element to be searched: ";
	cin>>x;
	l=0;
	r=n-1;
	if(binarySearch(a,l,r,x)!=-1){
		cout<<"The element is found"<<endl;
		cout<<"The position is: "<<binarySearch(a,l,r,x)<<endl;
	}
	else{
		cout<<"The element is not found" <<endl;
	}
	
	return 0;
}
