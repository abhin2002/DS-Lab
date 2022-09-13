#include<iostream>
using namespace std;

int fibb(int arr[], int n, int item)
{
    int loc = 0;
	int f2 = 0, f1 = 1;
	int fb = f1 + f2;
    int offset = -1;
	
	while(fb < n){
		f2 = f1;
		f1 = fb;
		fb = f1 + f2;
	}
	
	while(fb > 1){
        int i = offset + f2;
        if(arr[i] < item){
            fb = f1;
            f1 = f2;
            f2 = fb - f1;
            offset = i;
        }
        
        else if(arr[i] > item){
            fb = f2;
            f1 = f1 - f2;
            f2 = fb - f1;
        }
        else{   
            return i;
        }
    }

    if(fb == 1 && arr[offset + 1] == item){
        loc = offset + 1;
        return loc;
    }

    loc = -1;
    return loc;
	
}


int main(){
	
	int n, item;
    
    cout<<"Enter the number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements \n";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"DATA : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    int ch=1;

    while(ch != 0){
       cout<<"\nEnter the searching element : ";
        cin>>item;
    
        int pos = fibb(arr,n,item) + 1;
        if(pos > 0)
            cout<<"\nItem found at position "<<pos;
        else
            cout<<"\nItem not found";

        cout<<"\nDo you want to continue(1/0) : ";
        cin>>ch;

    }
    
    cout<<"\nThank you\n";
	
	
	return 0;
	

}