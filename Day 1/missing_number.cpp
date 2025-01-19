class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // code here
        long long sum1=0;//sum of elements in an array
        for(int i=0;i<arr.size();i++){
            sum1+=arr[i];
        }
        long long  N= arr.size() +1;
        long long sum2=0;//to find sum of n natural numbers
        sum2= N*(N+1)/2;
        
        return sum2-sum1;
        
    }
};
