#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,k;
    cout << "enter the array size";
    cin >> n;
    cout << "enter the k";
    cin >> k;
    int arr[n];
    cout << "enter the arrays elements";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int windowsum=0;
    for(int i=0;i<k;i++)
    {
        windowsum+=arr[i];
    }
    int maximumsum=windowsum;
    for(int i=k;i<n;i++)
    {
        windowsum==windowsum-arr[i-k]+arr[i];
        maximumsum=max(windowsum,maximumsum);
    }
    cout << "maximumsum=" << maximumsum;
    return 0;    

}