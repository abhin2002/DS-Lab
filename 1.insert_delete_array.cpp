#include<iostream>
using namespace std;

void insert(int *data, int &n){
    int element, pos;

    cout<<"\nEnter the element and position for insertion \n";
    cin>>element>>pos;

    pos = pos-1;

    for(int i=n-1; i>=pos; i--){
        
        data[i+1] = data[i];
    }
    

    data[pos] = element;

    n++;

}

void showArray(int *data, int n){
    cout<<"\nData : ";
    for(int i=0; i<n; i++)
        cout<<data[i]<<" ";
}

void deleteElement(int *data, int &n){
    int element, pos=-1;
    cout<<"Enter the element to delete : ";
    cin>>element;

    for(int i=0; i<n; i++){
        if(data[i] == element){
            pos =i;

            break;
        }
    }
    if(pos != -1){
        for(int i=pos; i<n; i++)
            data[i]=data[i+1];
        n--;
    }
    else
        cout<<"Item not found : ";
}


int main(){

    int *data = new int[100];
    int n;

    cout<<"Enter the number of elements : ";
    cin>>n;

    cout<<"Enter the elements \n";
    for(int i=0; i<n; i++){
        cin>>data[i];
    }

    cout<<"Data : ";
    for(int i=0; i<n; i++){
        cout<<data[i]<<" ";
    }
    int ch;
    cout<<"\nSelect a choice: ";
    cout<<"\n1.Insert";
    cout<<"\n2.Delete";
    cout<<"\n3.Display";
    cout<<"\n4.Exit\n";
    cin>>ch;
    while(ch != 4){
        if(ch == 1){
            insert(data,n);
        }
        else if(ch == 2){
            deleteElement(data,n);
        }
        else if(ch == 3){
            showArray(data,n);
        }
        else{
            cout<<"\nInvalid entry\nTry again\n";
        }
        cout<<"\nSelect a choice: ";
        cin>>ch;
    }
    cout<<"Thank you\n";

    return 0;
    
}