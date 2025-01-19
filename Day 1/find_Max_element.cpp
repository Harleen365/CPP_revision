#include <iostream>
#include<climits>
using namespace std;
int main() {
    // Write C++ code here
    int arr[5];
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0])); i++){
        cin>>arr[i];
    }
    int ans=INT_MIN;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0])); i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    cout<<ans<<" ";
    
   
}
