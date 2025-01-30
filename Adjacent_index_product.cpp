#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    // arr = {10,5,3,9,6,15} {10,30,45,18,135,15}
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res[n];
    int j = 0;
    res[j++] = arr[0];
    for(int i=1;i<n-1;i++){
        res[j++] = arr[i-1]*arr[i+1];
    }
    res[j++] = arr[n-1];
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}