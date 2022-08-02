
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
     /*
        int n = l+r+1;
        sort(arr, arr + n);  // nlogn TC
        return arr[k-1];
        */
        
        // using set stl as it runs on the average TC of O(logn)
        // we are using set here because in the problem statement it is given that all elements are distinct
        
        int n = l+r+1;
        
        set <int> s(arr, arr +n);
        
        set<int> :: iterator it1 = s.begin();
        
        advance(it1, k-1);
        
    //    int ans = *it1;
        
        return *it1;
    }
};
