#include <iostream>
using namespace std;
int main()
{
    // Initialisation of an array
    int a[5];
    // Accessing an array
    cout << "Value at 0 Index " << a[0] << endl;
    cout << "Value at 1 index " << a[1];
    cout << endl;
    //   Declaration of an array
    int arr[5] = {1, 2, 4, 6, 7};
    cout << "Value at 0 index " << arr[0] << endl;
    cout << "Value at 3 index" << arr[3] << endl;
    cout << "Value at 10 index " << arr[10];
    cout << endl;

    int ar[5] = {0, 1, 20};
    int n = 12;
    for (int i = 0; i <= n; i++)
        cout << ar[i] << " ";

    cout << endl;

    int arr1[5] = {0};
    int n1 = 5;
    for (int i = 0; i <= n1; i++)
        cout << arr1[i] << " ";
    cout << endl;

    int One[5] = {1};
    int n2 = 5;
    for (int i = 0; i <= n2; i++)
        cout << One[i] << " ";
       cout <<endl;

        int sizeofone= sizeof(One)/sizeof(int);
        cout<<sizeofone;



        
    
    char ch[5]={'a','b','c','d'};
 
    int n=5;
    for(int i=0;i<=n;i++)
   cout<<ch[i]<<" ";

    return 0;
}