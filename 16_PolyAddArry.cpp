#include <iostream>
using namespace std;
 
int maxOf(int m, int n) { 
    if(m>n)
        return m;
    else
        return n;
}

int *add(int A[], int B[], int m, int n)
{
   int newSize = max(m, n);
   int* sum = new int[newSize];

   if(m>n){
        for (int i = 0; i<m; i++)
            sum[i] = A[i];

        for (int i=0; i<n; i++)
            sum[i] += B[i];
    }
    else{
        for (int i = 0; i<n; i++)
            sum[i] = B[i];

        for (int i=0; i<m; i++)
            sum[i] += A[i];

    }

    for (int i=0; i<newSize; i++)
    {
       cout << sum[i];
       if (i != 0)
        cout << "x^" << i ;
       if (i != n-1)
       cout << " + ";
    }
}

void display(int poly[], int n)
{
    for (int i=0; i<n; i++)
    {
       cout << poly[i];
       if (i != 0)
        cout << "x^" << i ;
       if (i != n-1)
       cout << " + ";
    }
}

int main()
{
    int m, n;
    cout<<"Enter the number of terms in first polynomial : ";
    cin>>m;
    cout<<"Enter the coefficients of terms in the increasing order of power : \n";

    int A[m];
    for(int i=0; i<m; i++)
        cin>>A[i];

    cout<<"Enter the number of terms in second polynomial : ";
    cin>>n;
    cout<<"Enter the coefficients of terms in the increasing order of power : \n";

    int B[n];
    for(int i=0; i<n; i++)
        cin>>B[i];
 
    cout << "First polynomial is \n";
    display(A, m);
    cout << "\nSecond polynomial is \n";
    display(B, n);
 
    cout << "\nSum of polynomials is \n";
    add(A, B, m, n);

    return 0;
}