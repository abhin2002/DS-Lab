  #include<iostream>
using namespace std;

void selectionSort(int A[], int n)
{
	int temp = 0, count = 2;
	for(int i = 0; i<n; i++)
	{
		for(int j = count; j<n; j++)
		{
			if(A[j] < A[i])
			{
				temp = A[j];
				A[j] = A[i];
				A[i] = temp;
			}
		}
		count++;
	}
}

int main()
{
	int n;
	cout<<"Enter the number of elements : ";
	cin>>n;
	int data[n];
	cout<<"Enter the elements : ";
	for(int i=0; i<n; i++)
		cin>>data[i];
	
	cout<<"Array : ";
	for(int i=0; i<n; i++)
	{
		cout<<data[i]<<" ";
	}
	
	selectionSort(data, n);
	
	cout<<"\nSorted Array : ";
	for(int i=0; i<n; i++)
	{
		cout<<data[i]<<" ";
	}
	cout<<endl;
	return 0;
	
}