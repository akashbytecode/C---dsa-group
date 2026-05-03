//Find the Largest Element in an Array
#include<iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cout << "Enter the element "<<i+1<<": ";
        cin >> a[i];
    }
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"The largest element in the array is: "<<max<<endl;
    return 0;
}