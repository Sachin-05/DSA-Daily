class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int temp[n];
        
        for(int i=0; i<n; ++i){
            temp[i] = arr[i];
        }
        
        int j = 0;
        
        for(int i=0; i<n; ++i){
            if(arr[i]>=0){
                arr[j]= arr[i];
                j++;
            }
        }
        
        for(int i=0; i<n; ++i){
            if(temp[i]<0){
                arr[j] = temp[i];
                j++;
            }
        }
    }
};
