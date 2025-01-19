#include <iostream>
#include<climits>
using namespace std;
int main() {
    // Write C++ code here
    int arr[10];
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0])); i++){
        cin>>arr[i];
    }
    int ans=INT_MAX;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0])); i++){
        if(arr[i]<ans){
            ans=arr[i];
        }
    }
    cout<<ans<<" ";
   
}
