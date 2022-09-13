#include<iostream>
using namespace std;

int InterpolationSearch(int data[], int n, int item)
{
    int BEG, END;
    BEG = 0;
    END = n-1;
    while(BEG <= END && item >= data[BEG] && item <= data[END] )
    {
        if(BEG == END)
        {
            cout<<"\nItem found at position "<<END+1;
            return 0;            
        }

        
        int pos = BEG + ((END - BEG)/(data[END]-data[BEG]))*(item - data[BEG]);
        if(data[pos]==item)
        {
            cout<<"\nItem found at position "<<pos+1;
            return 0;
        }
        else if(item>data[pos])
        {
            BEG = BEG + 1;
        }
        else
            END = END - 1;
   
    }
    cout << "\nItem not found";
    return 0;
}




int main()
{
    int n, item;
    
    cout<<"Enter the number of elements : ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements \n";
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    cout<<"DATA : ";
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    
    int ch=1;

    while(ch != 0){
        cout<<"\nEnter the searching element : ";
        cin>>item;

        InterpolationSearch(A,n,item);

        cout<<"\nDo you want to continue(1/0) : ";
        cin>>ch;

    }
    
    cout<<"\nThank you\n";
    return 0;
}