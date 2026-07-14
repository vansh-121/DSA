class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> lt;
        int n =  nums.size();
        unordered_map<int, int> mpp;
        int min = n/3 + 1;

        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
                if(mpp[nums[i]] == min){
                    lt.push_back(nums[i]);
                }
            if(lt.size() == 2){
                break;
            }
        }
        return lt;
    }
};