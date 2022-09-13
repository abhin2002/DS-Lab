#include<iostream>
#include<cstring>
using namespace std;

int patternMatching(char T[], int tLength, char P[], int pLength)
{
    int k = 0;
    int maxLength = tLength - pLength + 1;
    while (k <= maxLength)
    {
        int c = 0;
        for (int i = 0; i < pLength; i++)
        {
            if (P[i] != T[k + i])
            {
                i = pLength;
            }
            else
            {
                c++;
            }
        }
        if (c == pLength)
        {
           return k;
        }
        k++;
    }
    return -1;
}

int main()
{
    char T[30];
    char P[30];
    int tlen, plen, x;
    int option = 1;

    while(option != 0){

        cout << "Enter Text : ";
        cin >> T;

        cout << "Enter Pattern: ";
        cin >> P;

        tlen = strlen(T);
        plen = strlen(P);
       
        cout << "\n";
        x = patternMatching(T, tlen, P, plen) + 1;
        if (x == 0)
        {
            cout << "Pattern not found" << endl;
        }
        else
        {
            cout << "Pattern match found at position : " << x << endl;
        }

        cout << "\n";
        cout << "Do you want to continue(1/0)?" << endl;
        cin >> option;

        cout << "\n";

    }

    return 0;

}