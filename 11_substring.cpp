#include<iostream>
using namespace std;

string substring(string str, int pos, int l){

    string sub;
    int c = 0;
    while(c < l){
        sub[c] = str[pos+c-1];
        c++; 
    }
    
    return sub;  
}

int main(){
    string str, sub;
    int pos, l;

    int ch = 1;
    while(ch != 0){
        cout<<"Enter the string : ";
        cin>> str;
        cout<<"Enter the starting position and length of substring\n";
        cin>> pos >> l;

        sub = substring(str,pos,l);

        cout<<"Substring : ";
        for(int i=0; i<l; i++)
            cout<<sub[i];
        
        cout<<"\nDo you want to continue(1/0) : ";
        cin>>ch;
    }
    
    

    return 0;

}