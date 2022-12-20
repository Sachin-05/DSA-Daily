// I had done this using the map frequency graph

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        
        map <int,int> mp;

        for(int i=0; i<nums.size(); ++i){
            if(mp.find(nums[i])==mp.end()){
                mp[nums[i]]=1;
            }else{
                mp[nums[i]]++;
            }
        }
        for(auto &it: mp){
            if(it.second == 1){
                return it.first;
            }
        }
        return 0;
    }
};
