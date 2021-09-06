#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
	int size;
	cout<<"Enter size of array:";
	cin>>size;
	cout<<"Enter elements of array:"<<endl;
	int array[size];
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	
	int max=INT_MIN;
	for(int j=0;j<size;j++)
	{
		if(array[j]>max)
			max=array[j];
	}
	cout<<"Max element in the array is:"<<max<<endl;
	
}
