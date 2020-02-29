#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
        cin >> arr[i];
    sort(arr+1,arr+n+1);
    if(n%2==0)
        cout << arr[n/2] << endl;
    else
        cout << arr[n/2 + 1] << endl;
}
