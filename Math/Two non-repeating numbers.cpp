vector<int> singleNumber(vector<int> nums) 
    {
       // let's try it out using the map first
       /*
       vector <int> res(2);
       
        if(nums.size()==1){
            return nums;
        }
        
        map <int,int> mp;

        for(int i=0; i<nums.size(); ++i){
            if(mp.find(nums[i])==mp.end()){
                mp[nums[i]]=1;
            }else{
                mp[nums[i]]++;
            }
        }
        int i=0;
        for(auto &it: mp){
            if(it.second == 1){
                res[i] = it.first;
                i++;
            }
        }
        return res;
        */
        
        // let's try it out using the bit
        // eg. {1,1,2,2,3,4}
        
        int xorans=0;
        for(int i=0; i<nums.size(); ++i){
           xorans ^= nums[i];    
        }
        // xorans = 3^4 = 7 = 111
        // steps to be taken to find out the two non repeating numbers
        // 1. find the rightmost digit
        xorans = xorans & ~(xorans-1); // find out the rightmost bit i.e 001
        // now we know there are going to be the two set with 1 and 0 bit
        int set1 = 0; // contains 1
        int set2 = 0; // contains 0;
        
        for(int i=0; i<nums.size(); ++i){
            if(xorans & nums[i]){
                set1 ^= nums[i];
            }else{
                set2 ^= nums[i];
            }
        }
        vector <int> res;
        res.push_back(set1);
        res.push_back(set2);
        sort(res.begin(),res.end());
        return res;
    }
