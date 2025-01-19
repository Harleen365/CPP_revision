class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int ans=-1;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>ans){
                ans=arr[i];
                
            }
        }
        int second=-1;
        for(int i=0;i<n;i++){
            if(arr[i]!=ans){
                second= max(second,arr[i]);
            }
        }
        return second;
    }
};
