class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int strt=0,end=nums.size()-1;
        vector<pair<int,int>> arr;
        for(int i=0;i<nums.size();i++)
        {
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        vector<int> ans;
        while(strt<end){
            int current_sum = arr[strt].first + arr[end].first;
            if(current_sum==target){
                ans.push_back(arr[strt].second);
                ans.push_back(arr[end].second);
                return ans;
            }
            else if(current_sum<target){
                strt++;
            }
            else{
                end--;
            }
        }
        
        return ans;
    }
};
//