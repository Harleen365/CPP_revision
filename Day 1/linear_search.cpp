 int search(vector<int>& arr, int x) {

        // Your code here
        int n= sizeof(arr/arr[0]);
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                return i;
            }
        }
        return -1;
    }
